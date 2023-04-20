#include <iostream>
#include "queue.hpp"

Queue::Queue(){
		first=nullptr;
		last=nullptr;
	}

	Queue::~Queue() {
		while (last != nullptr) {
			Node* temp = last;
			last = last->next;
			delete temp;
		}
	}

	bool Queue::is_empty(){
		if(last==nullptr){
		return 1;
		}
		return 0;
	}
	
	void Queue::push(int data){
		Node* newNode = new Node(data);
		if (first==nullptr){
			first=last=newNode;
		}else{
			last=last->next=newNode;
		}
	}

	int Queue::size(){
		int size = 0;
		Node* curr = first;
		while (curr != nullptr) {
			curr=curr->next;
			size++;
		}
		return size;
	}

	int Queue::front(){
		if (last == nullptr) {
			throw std::out_of_range("Stack is empty");
		}
		return first->data;
	}
	

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

	void Queue::print(){
		Node* curr = first;
		while (curr!=nullptr){ 
			std::cout<<curr->data<<" ";
			curr=curr->next;
		}
		std::cout<<std::endl;
	}

