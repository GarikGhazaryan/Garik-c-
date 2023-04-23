#include <iostream>
#include "stack.hpp"
	
	// constructor
	Stack::Stack(){
		last=nullptr;
	}

	Stack::~Stack() {
		while (last != nullptr) {
			Node* temp = last;
			last = last->next;
			delete temp;
		}
	}
	
	//If there are no elements in the list, returned true . If the sheet has at least one element, returned false.
	bool Stack::is_empty(){
		if(last==nullptr){
		return 1;
		}
		return 0;
	}
	
	// counts the length of the sheet
	int Stack::size(){
		int size = 0;
		Node* curr = last;
		while (curr != nullptr) {
			curr=curr->next;
			size++;
		}
		return size;
	}
	
	//the method returns the last element added to the sheet.
	int Stack::top() {
		if (last == nullptr) {
			throw std::out_of_range("Stack is empty");
		}
		return last->data;
	}
	//adds a new element to the end of the sheet.
	void Stack::push(int data) {
		Node* newNode = new Node(data);
		newNode->next = last;
		std::cout<<last<<"first"<<std::endl;
		last=newNode;
		std::cout<<last->data<<"second"<<std::endl;
	}
	
	//method removes the last element from the list and returns its value.
	int Stack::pop() { 
		if (last == nullptr) {
			throw std::out_of_range("Stack is empty");
		}
		int data = last->data;
		Node* temp = last;
		last = last->next;
		delete temp;
		return data;
	}
	
	//prints the value of the sheet elements
	void Stack::print(){
		Node* curr = last;
		while (curr!=nullptr){ 
			std::cout<<curr->data<<std::endl;
			curr=curr->next;
		}
	}
