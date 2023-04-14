#include <iostream>
#include "list.hpp"
#include <cassert>


	// constructor 
	List::List() {
        	first=nullptr;
		size=0;
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
		size++;
	}

	//prints the value of the sheet elements
	void List::print() {
		Node* nod = first;
		while (nod!=nullptr) {
			std::cout << nod->data << " ";
			nod = nod->next;
		}
		std::cout << std::endl;
		std::cout <<"size"<<size<<std::endl;
	}

	//Overloading is an index access operator
	//the index of the first element starts from 0
	int & List::operator[](int index) {

		assert(index>=0&&index<=size-1);

		Node* current = first;
		for (int i = 0; i < index; i++) {
			current = current->next;
		}
	return (*current).data;
	}

	//adding an element by index, the index of the first element starts from 0
	//index must be between 0 and max sheet size,

	void List::insert(int data, int pos){

		assert(pos<=get_size());
		assert(pos>=0);

		Node* nn = new Node();
		nn->data= data;
		if (pos==0){
			nn->next=first;
			first=nn;
		}else{
			Node* temp = first;
			for (int i = 0; i < pos-1; i++) {
				temp = temp->next;
			}
			nn->next =temp->next;
			temp->next=nn;
		}
		size++;
	}

	//deleting an element by index, the index of the first element starts from 0
	//index must be between 0 and max sheet size,
	//if returned "-1" list is empty,
	//if returned "-2" deletion not completed,
	//else returned the value of the removed element,

	int List::remove_by_index(int index){
		if (first==nullptr){
			//return -1;
			throw std::runtime_error("error from //remove_by_index//, the list is empty");
		}

		if(index==0){
			Node* tmp =first;
			first=first->next;
			int val = tmp->data;
			delete tmp;
			size--;
			return val; 
		}

		assert(index>=0&&index<=size-1);

		Node* pre_del = first;
		Node* del = first->next;
		int i = 1;
		while (del != nullptr && i < index) {
			pre_del = del;
			del = del->next;
			i++;
		}

		if (del != nullptr&&index>0) {
			pre_del->next = del->next;
			int val=del->data;
			delete del;
			size--;
			return val;
		}
		return -2;
	}
	
	// Delete by value and with two flags.
	// if the flag is 1, then the first element equal to the value is removed,
	// if the flag is 0, then all elements equal to the value are removed 
	// returns
	// if returned 0 remove is complite
	// if returned 1 there is no this element in the sheet
	bool List::remove_by_value(int val, bool flag){
		
		Node* pre_del = first;
		Node* del = first->next;
		int s=size;
		if(flag){			
			while (del != nullptr && (del->data!=val)) {
				pre_del = del;
				del = del->next;
			}

			if (del != nullptr && del->data==val) {
				pre_del->next = del->next;
				delete del;
				size--;
			}
		}else{
		
			while (del != nullptr) {
				if (del->data == val) {
					pre_del->next = del->next;
					delete del;
					size--;
				} else {
					pre_del = del;
				}
				del = pre_del->next;
			}	
		}
		if(size==s){
			return 1;
		}
		return 0;
	}
	
	//method removes the last element from the list and returns its value.
	int List::pop_back(){
		if(first==nullptr){
			throw std::runtime_error("error from //pop_back//, the list is empty");
		}

		int val;
		if(first->next==nullptr){
			val=first->data;
			delete first;
			first = nullptr;
			size--;
			return val;
		}

		Node* predel=first;
		Node* del =first->next;
		while(del->next!=nullptr){
			predel=del;
			del=del->next;
		}
		val=del->data;
		delete del;
		predel->next=nullptr;
		size--;
		return val;
	
	}
	//destructor 
	//iterates through the sheet element by element, remembers the next element and deletes the current element
	List::~List() {
		Node* del = first;
		while (del != nullptr) {
			Node* last = del->next;
			delete del;
//			std::cout<<"dest"<<std::endl;
			del = last;
		}
	}

	//copy constructor
	List::List(const List& other) {
		size=other.size;
		if (other.first == nullptr) {
			first = nullptr;
		} else {

			first = new Node();
			first->data=other.first->data;

			Node* curr = first;
			Node* otherCurr = other.first->next;
			while (otherCurr!= nullptr) {
				curr->next = new Node();
				curr->next->data=otherCurr->data;
				curr = curr->next;
				otherCurr = otherCurr->next;
			}
		}
	}
