#include <iostream>
#include "list.hpp"



	// constructor 
	List::List() {
        first=nullptr;
    }

	// counts the length of the sheet
	int List::get_size(){
		int size=0;
			Node* k=first;
			while(k!=nullptr){
				k=k->next;
				size++;
			}
	
		return size;
	}
	//If there are no elements in the list, returned true . If the sheet has at least one element, returned false.	
	bool List::is_empty(){
		
        if (first == nullptr) {
				return true;
        }else{
			return false;
		}
	}


	//adds a new element to the end of the sheet.
    void List::push_back(int data) {
        Node* nn = new Node();
        nn->data = data;
        nn->next = nullptr;

        if (List::is_empty()) {
            first = nn;
        }else{
        	Node* temp = first;
        	while (temp->next != nullptr) {
            	temp = temp->next;
        	}
        	temp->next = nn;
   		}
	}

	//prints the value of the sheet elements
    void List::print() {
        Node* nod = first;
        while (nod!=nullptr) {
				std::cout << nod->data << " ";
            nod = nod->next;
        }
		std::cout << std::endl;
    }

	//Overloading is an index access operator
	int & List::operator[](int index) {
        Node* current = first;
        for (int i = 0; i < index; i++) {
            if (current == nullptr) {
                throw std::out_of_range("Index out of bounds");
            }
            current = current->next;
        }
        return (*current).data;
    }
