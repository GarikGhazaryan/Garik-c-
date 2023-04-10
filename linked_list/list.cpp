#include <iostream>
#include "list.hpp"



	// constructor 
	List::List() {
        first=nullptr;
    }

	// counts the length of the sheet
	int List::get_size(){
		int size=0;
        if (first == nullptr) {
				std::cout << "List is empty" << std::endl;
        }else{
			Node* k=first;
			while(k!=nullptr){
				k=k->next;
				size++;
			}
		}
		return size;
	}
	
	//adds a new element to the end of the sheet.
    void List::push_back(int data) {
        Node* nn = new Node();
        nn->data = data;
        nn->next = nullptr;

        if (first == nullptr) {
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
	Node & List::operator[](int index) {
        Node* current = first;
        for (int i = 0; i < index; i++) {
            if (current == nullptr) {
                throw std::out_of_range("Index out of bounds");
            }
            current = current->next;
        }
        return *current;
    }
