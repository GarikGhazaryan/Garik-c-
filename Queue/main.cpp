#include <iostream>
#include "queue.hpp"

int main(){
	Queue q;
	q.push(111);
	q.push(222);
	q.push(333);
	q.push(444);
	q.push(555);
	q.push(666);
	q.push(777);
	q.push(888);
	q.print();
	std::cout<<"size "<<q.size()<<std::endl;
	std::cout<<"is_empty "<<q.is_empty()<<std::endl;
	std::cout<<"front "<<q.front()<<std::endl;
	std::cout<<"pop "<<q.pop()<<std::endl;
	std::cout<<"pop "<<q.pop()<<std::endl;
	std::cout<<"pop "<<q.pop()<<std::endl;
	std::cout<<"size "<<q.size()<<std::endl;
	q.print();
}
