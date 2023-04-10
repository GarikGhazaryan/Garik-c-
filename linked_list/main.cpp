#include <iostream>
#include "list.hpp"
#include <cassert>

int main() {
    List l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
	assert(l.get_size()==4);  //here size should be 4
    l.print();
	std::cout<<"size  "<<l.get_size()<<std::endl;
	(l[1]).data=8;
	std::cout<<"3 rd element data is  "<<(l[3]).data<<std::endl;
    l.print();
    l.push_back(5);
    l.push_back(6);
    l.push_back(7);
    l.print();
	std::cout<<"5 th element data is  "<<(l[5]).data<<std::endl;
	std::cout<<"size  "<<l.get_size()<<std::endl;

    return 0;
}
