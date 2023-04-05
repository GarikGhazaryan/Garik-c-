#include <iostream>
#include <cassert>
#include "smart_array.h"


	SmartArray::SmartArray() {
		arr=new int [capacity];
        size = 0;
    }

    SmartArray::~SmartArray() {
        delete[] arr; 
    }

	void SmartArray::set_el(int el){
		if(capacity==size){
		int* new_arr1=new int[2*capacity];
		size++;
		arr[size-1]=el;
		for(int i=0;i<size;i++)
			new_arr1[i]=arr[i];
			delete [] arr;
		//	std::cout<<"dell is complite"<<std::endl;
			arr=new_arr1;
		}else{
		size++;
		arr[size-1]=el;
		}
	}

	void SmartArray::dell_el(){
	//	assert(size>=0);
		size--;
	}

	void SmartArray::print(){
		if(size!=0){
    		for (int i = 0; i < size; i++) {
        		std::cout << arr[i]<< " ";
		}
		std::cout<<std::endl;
		}else{
			std::cout<<"array is empty"<<std::endl;
		}
    }
