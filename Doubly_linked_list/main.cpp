#include <iostream>
#include "double.hpp"

int main(){
try{
	doublell<char> list;
	list.push_back('g');
	list.push_back('j');
	list.push_back('j');
	list.push_back('j');
	list.push_back('j');
	list.push_back('g');
	list.push_back('j');
	list.push_front('3');
	list.push_back('r');
	list.print();
	list.reverse();
	list.print();
	list.reverse();
	list.pop_front();
	list.pop_back();
	list.print();
	list.insert('H',7);
	list.insert('x',0);
	list.insert('t',3);
	list[9]='e';
	list.print();
	std::cout<<list.front()<<std::endl;
	std::cout<<list.back()<<std::endl;
	std::cout<<list[9]<<std::endl;



	doublell<int> list1;
	list1.push_back(10);
	list1.push_back(11);
	list1.push_back(12);
	list1.push_back(13);
	list1.push_back(14);
	list1.print();
	list1.reverse();
	list1.print();
	list1.push_back(15);
	list1.push_back(16);
	list1.push_back(17);
	list1.push_back(18);
	list1.print();
	list1.insert(100,9);
	list1.print();
	list1.pop_back();
	list1.pop_front();
	list1.print();
	std::cout<<list1.front()<<std::endl;
	std::cout<<list1.back()<<std::endl;
	
} catch (std::runtime_error& e) {
	std::cerr << e.what() << std::endl;

} catch (std::out_of_range& e) {
	std::cerr << e.what() << std::endl;
}
	return 0;
}

