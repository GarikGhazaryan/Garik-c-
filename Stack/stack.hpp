#include "node.hpp"

class Stack {
private:
	Node* last;
public:
	Stack();

	~Stack();

	bool is_empty();

	int size();

	int top();

	void push(int item);

	int pop();
	
	void print();

};
