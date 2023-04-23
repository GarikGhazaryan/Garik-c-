#include <iostream>
#include "queue.hpp"
	
	//constructor
	Queue::Queue(){
		first=nullptr;
		last=nullptr;
	}
	//desrtuctor
	Queue::~Queue() {
		while (last != nullptr) {
			Node* temp = last;
			last = last->next;
			delete temp;
		}
	}
	

	//this method checks for the presence of elements on the sheet; if the list is empty, returned true, otherwise returned false.
	bool Queue::is_empty(){
		if(last==nullptr){
		return 1;
		}
		return 0;
	}
	//method adds an element to the end of the sheet.	
	void Queue::push(int data){
		Node* newNode = new Node(data);
		if (first==nullptr){
			last=newNode;
			first=last;
		}else{
			last->next=newNode;
			last=last->next;
		}
	}
	//method returns the count of elements in the sheet.
	int Queue::size(){
		int size = 0;
		Node* curr = first;
		while (curr != nullptr) {
			curr=curr->next;
			size++;
		}
		return size;
	}
	//the method returns the first element added to the sheet.
	int Queue::front(){
		if (last == nullptr) {
			throw std::out_of_range("Stack is empty");
		}
		return first->data;
	}
	
	//the method returns the first element added to the sheet and removes it.
	int Queue::pop() { 
		if (first == nullptr) {
			throw std::out_of_range("Stack is empty");
		}
		int data = first->data;
		Node* temp = first;
		first = first->next;
		delete temp;
		return data;
	}
	//prints the value of the sheet elements.
	void Queue::print(){
		Node* curr = first;
		while (curr!=nullptr){ 
			std::cout<<curr->data<<" ";
			curr=curr->next;
		}
		std::cout<<std::endl;
	}

