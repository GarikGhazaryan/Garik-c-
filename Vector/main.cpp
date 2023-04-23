#include <iostream>
#include "smart_array.hpp"


int main() {
    SmartArray ar;
	ar.set_el(1);
	ar.set_el(2);
	std::cout<<"this is arr 1"<<std::endl;
	ar.print();
	ar.set_el(3);
	ar.set_el(4);
	ar.set_el(5);
	ar.set_el(6);
	ar.set_el(7);
	ar.set_el(8);
	ar.set_el(9);
    SmartArray ar_new(ar);
	std::cout<<"this is new arr 1"<<std::endl;
	ar_new.print();
	ar.set_el(10);
	ar.set_el(11);
	ar.set_el(12);
	ar.set_el(13);
	ar.set_el(14);
	std::cout<<"this is arr 2"<<std::endl;
	ar.print();
	std::cout<<"this is new arr 2"<<std::endl;
	ar_new.print();
	std::cout<<"this is new arr 3"<<std::endl;
	ar_new.remove(8);
	ar_new.print();
	ar.set_el(15);
	ar.set_el(16);
	ar.set_el(17);
	ar.set_el(18);
	ar.set_el(19);
	ar.insert(0,12);
	ar.insert(0,122);
	ar.insert(0,121);
	ar.insert(0,120);
	ar.remove(120);
	ar.remove(3);
	ar.remove(2);
	std::cout<<"this is arr 3"<<std::endl;
	ar.print();
	ar[5]=777;
	std::cout<<"this is arr 4"<<std::endl;
	ar.print();

    return 0;
}
