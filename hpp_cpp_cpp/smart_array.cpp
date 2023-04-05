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
    }
	//method adds an element to the end of the array.
	void SmartArray::set_el(int el){

		if(m_capacity==m_size){
			m_capacity*=2;
			int* new_arr1=new int[m_capacity];
			m_size++;
			m_arr[m_size-1]=el;
			for(int i=0;i<m_size;i++){
				new_arr1[i]=m_arr[i];
			}
			delete [] m_arr;
			//std::cout<<"dell is complite"<<std::endl;
			//std::cout<<m_capacity<<std::endl;
			m_arr=new_arr1;
		}else{
			m_size++;
			m_arr[m_size-1]=el;
		}
	}
	//method adds an element at a specific array index and expands it.
	void SmartArray::insert(int index, int el){
		m_size++;
		assert(index>=0&&index<m_size);
		for (int i=m_size-1; i>index;i--){
			m_arr[i]=m_arr[i-1];
		}
		m_arr[index]=el;
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
				m_size--;
			}		
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
