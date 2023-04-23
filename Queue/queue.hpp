#include "node.hpp"

class Queue {
private:
	Node* first;
	Node* last;
public:

	//constructor
	Queue();

	//desrtuctor
	~Queue();

	//this method checks for the presence of elements on the sheet; if the list is empty, returned true, otherwise returned false.
	bool is_empty();

	//method adds an element to the end of the sheet.
	void push(int data);
	
	//method returns the count of elements in the sheet.
	int size();
	
	//the method returns the first element added to the sheet.
	int front();
	
	//the method returns the first element added to the sheet and removes it.
	int pop();
	
	//prints the value of the sheet elements.
	void print();
};
