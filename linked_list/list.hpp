#include "node.hpp"

class List {

	private:
    	Node* first;
		int size;
	public:
	
		// constructori. defines to the pointer the first element of the null pointer
    	List();

		//counts the length of the sheet running up to the zero pointer
		int get_size();

		////If there are no elements in the list, returned true . If the sheet has at least one element, returned false.
		bool is_empty();

    	//adds a new element to the end of the sheet with a new value
    	void push_back(int data);
    	
		//prints the value of the sheet elements
    	void print();
		
		//Overloading is an index access operator and returns the element at the given index. Indexing starts from 0
		int& operator[](int index);

		//adding an element by index, the index of the first element starts from 0
    	//index must be between 0 and max sheet size,
		void insert(int data, int pos);


		//index must be between 0 and max sheet size,
	    //if returned "-1" list is empty,
    	//if returned "-2" deletion not completed,
    	//else returned the value of the removed element,
		int remove_by_index(int index);
		
		// Delete by value and with two flags.
    	// if the flag is 1, then the first element equal to the value is removed,
    	// if the flag is 0, then all elements equal to the value are removed 
    	// returns
    	// if returned 0 remove is complite
    	// if returned 1 there is no this element in the sheet
		bool remove_by_value(int val, bool flag);

};
