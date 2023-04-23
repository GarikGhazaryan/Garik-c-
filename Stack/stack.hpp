#include "node.hpp"

class Stack {
private:
	Node* last;
public:

	// constructor
	Stack();
	
	//destructor
	~Stack();
	
	//If there are no elements in the list, returned true . If the sheet has at least one element, returned false.
	bool is_empty();
	
	// counts the length of the sheet.
	int size();
	
	//the method returns the last element added to the sheet.
	int top();
	
	//adds a new element to the end of the sheet.
	void push(int item);
	
	//method removes the last element from the list and returns its value.
	int pop();
	
	//prints the value of the sheet elements.
	void print();

};
