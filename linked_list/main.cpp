#include <iostream>
#include "list.hpp"
#include <cassert>

int main() {
    List l;
	assert(l.get_size()==0);  //here size should be 0
	std::cout<<l.is_empty()<<std::endl;
    l.push_back(111);
    l.push_back(222);
	std::cout<<l.is_empty()<<std::endl;
    l.push_back(333);
    l.push_back(444);
	assert(l.get_size()==4);  //here size should be 4
	assert(l[3]==444);  //here 3 rd element should be 4
    l.print();
	std::cout<<"size  "<<l.get_size()<<std::endl;
	(l[1])=8;
	std::cout<<"3 rd element data is  "<<(l[3])<<std::endl;
    l.print();
    l.push_back(555);
    l.push_back(660);
    l.push_back(777);
    l.print();
	std::cout<<"5 th element data is  "<<(l[5])<<std::endl;
	std::cout<<"size  "<<l.get_size()<<std::endl;

    return 0;
}
