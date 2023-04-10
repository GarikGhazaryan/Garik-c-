#include "node.hpp"

class List {

	private:
    	Node* first;
	public:
	
		// constructori. defines to the pointer the first element of the null pointer
    	List();

		//counts the length of the sheet running up to the zero pointer
		int get_size();

    	//adds a new element to the end of the sheet with a new value
    	void push_back(int data);
    	
		//prints the value of the sheet elements
    	void print();
		
		//Overloading is an index access operator and returns the element at the given index. Indexing starts from 0
		Node& operator[](int index);
};
