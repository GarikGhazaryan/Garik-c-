#include <iostream>
#include "list.hpp"
#include <cassert>

int main() {

	try {
    List l;
	assert(l.get_size()==0);  //here size should be 0
	std::cout<<l.is_empty()<<std::endl;
	//l.pop_back();
	//std::cout<<l.remove_by_index(0)<<std::endl;
	l.push_back(111);
	l.push_back(222);
	std::cout<<l.is_empty()<<std::endl;
	l.push_back(333);
	l.push_back(444);
	assert(l.get_size()==4);  //here size should be 4
	assert(l[3]==444);  //here 3 rd element should be 4
	l.print();
	(l[1])=8;
	std::cout<<"3 rd element data is  "<<(l[3])<<std::endl;
	l.print();
	l.push_back(555);
	l.push_back(555);
	l.push_back(555);
	l.push_back(660);
	l.push_back(777);
	l.push_back(661);
	l.push_back(777);
	l.push_back(777);
	l.push_back(663);
	l.push_back(777);
	l.print();
	l.insert(1111, 0);
	assert(l[0]==1111);
	l.print();
	std::cout<<"5 th element data is  "<<(l[5])<<std::endl;
	std::cout<<"size  "<<l.get_size()<<std::endl;
	std::cout<<"rem. val. is "<<l.remove_by_index(0)<<std::endl;
	l.print();
	std::cout<<l.remove_by_value(777,0)<<std::endl;
	std::cout<<l.remove_by_value(555,1)<<std::endl;
	l.print();
	l.pop_back();
	l.pop_back();
	l.pop_back();
	l.print();

	std::cout<<"----------"<<std::endl;

	List copy(l);

	copy.print();
	copy.pop_back();
	copy.pop_back();
	copy.push_back(12345);
	copy.print();
	std::cout<<"----------"<<std::endl;
	l.print();

    return 0;


} catch (std::runtime_error& e) {
    std::cerr << e.what() << std::endl;
}
}
















