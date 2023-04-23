#include <iostream>
#include "queue.hpp"

int main(){

try{
	Queue q;
	q.push(111);
	std::cout<<"pop "<<q.pop()<<std::endl;
	q.push(222);
	q.push(333);
	q.push(444);
	q.push(555);
	q.push(966);
	q.push(777);
	q.push(888);
	q.print();
	std::cout<<"size "<<q.size()<<std::endl;
	std::cout<<"is_empty "<<q.is_empty()<<std::endl;
	std::cout<<"front "<<q.front()<<std::endl;
	std::cout<<"pop "<<q.pop()<<std::endl;
	std::cout<<"pop "<<q.pop()<<std::endl;
	std::cout<<"pop "<<q.pop()<<std::endl;
	q.print();
	std::cout<<"size "<<q.size()<<std::endl;
	
} catch (std::runtime_error& e) {
		std::cerr << e.what() << std::endl;

} catch (std::out_of_range& e) {
		std::cerr << e.what() << std::endl;
}
return 0;
}
