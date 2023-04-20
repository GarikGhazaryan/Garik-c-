#include "node.hpp"

class Queue {
private:
	Node* first;
	Node* last;
public:
	Queue();

	~Queue();

	bool is_empty();

	void push(int data);

	int size();

	int front();

	int pop();

	void print();
};
