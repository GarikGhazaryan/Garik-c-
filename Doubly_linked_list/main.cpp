#include <iostream>
#include "double.hpp"

int main(){
try{
	doublell<char> list;
	list.push_back('g');
	list.push_back('p');
	list.push_back('i');
	list.push_back('p');
	list.push_back('n');
	list.push_back('m');
	list.push_back('j');
	list.push_front('p');
	list.print();
	list.bubblesort();
	list.push_back('r');
	list.print();
	list.insertionsort();
	list.print();
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
	list1.push_back(0);
	list1.push_back(9);
	list1.push_back(2);
	list1.push_back(5);
	list1.push_back(4);
	list1.push_back(3);
	list1.push_back(8);
	list1.push_back(6);
	list1.push_back(7);
	list1.print();
	list1.insertionsort();
	list1.print();
	list1.reverse();
	list1.print();
	list1.insert(10,9);
	list1.print();
	list1.bubblesort();
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

