class Stack{
private:
	int* m_arr;
	int m_size;
	int m_capacity;

public:

	//constructor initializes an empty array with an initial capacity of 1.
	Stack();

	//destructor-removes array and frees memory.
	~Stack();

	//this method checks for the presence of elements on the sheet; if the list is empty, returned true, otherwise returned false.
	bool is_empty();

	//method returns the count of elements in the sheeti.
	int size();
	
	//method returns the last added element.	
	int top();
	
	//the method returns the last element added to the sheet and removes it.
	int pop();

	//method adds an element to the end of the array.
	void push(int el);

	//copy constructor copies an array from an old array
	Stack(const Stack& other);

	//displays an array.
	void print();
};
