#include <iostream>
#include "stack.hpp"

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

	bool Stack::is_empty(){
		if(last==nullptr){
		return 1;
		}
		return 0;
	}

	int Stack::size(){
		int size = 0;
		Node* curr = last;
		while (curr != nullptr) {
			curr=curr->next;
			size++;
		}
		return size;
	}

	int Stack::top() {
		if (last == nullptr) {
			throw std::out_of_range("Stack is empty");
		}
		return last->data;
	}

	void Stack::push(int data) {
		Node* newNode = new Node(data);
		newNode->next = last;
		std::cout<<last<<"first"<<std::endl;
		last=newNode;
		std::cout<<last->data<<"second"<<std::endl;
	}

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
	
	void Stack::print(){
		Node* curr = last;
		while (curr!=nullptr){ 
			std::cout<<curr->data<<std::endl;
			curr=curr->next;
		}
	}
