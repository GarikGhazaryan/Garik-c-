#include <iostream>
#include <cassert>
#include "stack_vector.hpp"

	//constructor initializes an empty array with an initial capacity of 1.
	Stack::Stack() {
		m_capacity=1;
		m_arr=new int [m_capacity];
        	m_size = 0;
        }

	//destructor.
    	Stack::~Stack() {
        	delete[] m_arr;
        }
        
	//this method checks for the presence of elements on the sheet; if the list is empty, returned true, otherwise returned false.
	bool Stack::is_empty(){
		if(m_size==0){
			return 1;
		}
		return 0;

	}
	
	//method returns the count of elements in the sheet.
	int Stack::size(){
		return m_size;
	}
	
	//method returns the last added element.
	int Stack::top(){
		if (m_size==0){
			throw std::runtime_error("error list is empty");
		}
		return m_arr[m_size-1];
	}

	//the method returns the last element added to the sheet and removes it.
	int Stack::pop(){
		if (m_size==0){
			throw std::runtime_error("error list is empty");
		}
		int tmp=m_arr[m_size-1];
		m_size--;
		return tmp;
	}


	//method adds an element to the end of the array.
	void Stack::push(int el){
		if (m_size!=m_capacity){
			m_size++;
			m_arr[m_size-1]=el;
		}else{
			m_capacity*=2;
			int* new_arr1=new int[m_capacity];
			for(int i=0;i<m_size;i++){
				new_arr1[i]=m_arr[i];
			}
			delete [] m_arr;
			m_arr=new_arr1;
			m_size++;
			m_arr[m_size-1]=el;
		}

	}

	//copy constructor copies an array from an old array.
	Stack::Stack(const Stack& other) {
    		m_size = other.m_size;
    		m_capacity = other.m_capacity;
    		m_arr = new int[m_capacity];
    		for (int i = 0; i < m_size; i++) {
        		m_arr[i] = other.m_arr[i];
    		}
	}

	//displays an array.
	void Stack::print(){
		if(m_size!=0){
    		for (int i = 0; i < m_size; i++) {
        		std::cout << m_arr[i]<< " ";
		}
		std::cout<<std::endl;
		}else{
			std::cout<<"array is empty"<<std::endl;
		}
    }
