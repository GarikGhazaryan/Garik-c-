#include <iostream>
#include <cassert>
#include "smart_array.hpp"

	//constructor initializes an empty array with an initial capacity of 1.
	SmartArray::SmartArray() {
		m_capacity=1;
		m_arr=new int [m_capacity];
        m_size = 0;
    }

	//destructor.
    SmartArray::~SmartArray() {
        delete[] m_arr; 
	//		std::cout<<"1-d"<<std::endl;
    }

	//method adds an element to the end of the array.
	void SmartArray::set_el(int el){
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
	//method adds an element at a specific array index and expands it.
	void SmartArray::insert(int index, int el){
		assert(index>=0&&index<m_size);
		if (m_size!=m_capacity){
			m_size++;
			for (int i=m_size-1; i>index;i--){
				m_arr[i]=m_arr[i-1];
		}
		m_arr[index]=el;
		}else{
			m_capacity*=2;
			int* new_arr1=new int[m_capacity];
			for(int i=0;i<m_size;i++){
				new_arr1[i]=m_arr[i];
			}
			delete [] m_arr;
			m_arr=new_arr1;
			m_size++;
			for (int i=m_size-1; i>index;i--){
				m_arr[i]=m_arr[i-1];
			}
			m_arr[index]=el;
		}	
	}
	//method removes the given element from the array.
	void SmartArray::remove(int el){
		int x=0;
		for(int i=0;i<m_size;i++){
			if(m_arr[i]!=el){
				m_arr[i]=m_arr[i+x];
			}else{
				x=1;
				m_arr[i]=m_arr[i+x];
			}		
		}
		m_size--;
	}
	//operator [] is defined to access an array member by index.
	int&SmartArray::operator[](int index) {
        if (index < 0 || index >= m_size) {
				std::cout<<"Index out of range"<<std::endl;
				assert(index>=0&&index<m_size);
        }
        return m_arr[index];
    }
	//	copy constructor copies an array from an old array.
	SmartArray::SmartArray(const SmartArray& other) {
    	m_size = other.m_size;
    	m_capacity = other.m_capacity;
    	m_arr = new int[m_capacity];
    	for (int i = 0; i < m_size; i++) {
        	m_arr[i] = other.m_arr[i];
    	}
	}


	//method removes an element from the end of an array.
	void SmartArray::dell_el(){
		assert(m_size>=0);
		m_size--;
	}

	//displays an array.
	void SmartArray::print(){
		if(m_size!=0){
    		for (int i = 0; i < m_size; i++) {
        		std::cout << m_arr[i]<< " ";
		}
		std::cout<<std::endl;
		}else{
			std::cout<<"array is empty"<<std::endl;
		}
    }
