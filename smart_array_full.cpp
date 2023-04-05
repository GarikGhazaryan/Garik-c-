#include <iostream>
#include <cassert>

class SmartArray {
private:
    int* arr;
	int size;
	int capacity=5;

public:

	SmartArray() {
		arr=new int [capacity];
        size = 0;
    }

    ~SmartArray() {
        delete[] arr; 
    }

	void set_el(int el){
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

	void dell_el(){
		size--;
		assert(size>=0);
	}

	void print(){
		if(size!=0){
    		for (int i = 0; i < size; i++) {
        		std::cout << arr[i]<< " ";
		}
	std::cout<<std::endl;
		}else{
			std::cout<<"array is empty"<<std::endl;
		}
    }
	

};
int main() {
    SmartArray ar;
	ar.set_el(111);
	ar.set_el(118);
	ar.print();
	ar.dell_el();
	ar.set_el(112);
	ar.print();
	ar.set_el(222);
	ar.set_el(2992);
	ar.set_el(221);
	ar.set_el(222);
	ar.dell_el();
	ar.dell_el();
	ar.dell_el();
	ar.print();

    return 0;
}

