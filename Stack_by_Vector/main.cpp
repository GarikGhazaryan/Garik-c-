#include <iostream>
#include "stack_vector.hpp"
int main(){
try{
	Stack sv;
	sv.push(1);
	sv.push(2);
	sv.push(3);
	sv.push(4);
	sv.push(5);
	sv.push(6);
	sv.push(7);
	sv.push(8);
	sv.print();
	std::cout<<sv.pop()<<std::endl;
	std::cout<<sv.pop()<<std::endl;
	std::cout<<sv.pop()<<std::endl;
	sv.print();
	std::cout<<sv.top()<<std::endl;

} catch (std::runtime_error& e) {
		std::cerr << e.what() << std::endl;

} catch (std::out_of_range& e) {
		std::cerr << e.what() << std::endl;
}
return 0;
}
