#include <iostream>
#include "stack.hpp"

int main(){
	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	s.push(54);
	s.print();
	std::cout<<"-------------"<<std::endl;
	std::cout<<"is_empty  "<<s.is_empty()<<std::endl;
	std::cout<<"size  "<<s.size()<<std::endl;
	std::cout<<"pop  "<<s.pop()<<std::endl;
	std::cout<<"top  "<<s.top()<<std::endl;
	std::cout<<"-------------"<<std::endl;
	s.print();

}


