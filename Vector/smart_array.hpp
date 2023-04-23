class SmartArray {
private:
    int* m_arr;
	int m_size;
	int m_capacity;

public:

	//constructor initializes an empty array with an initial capacity of 1.
	SmartArray();

	//destructor-removes array and frees memory.
	~SmartArray();

	//method adds an element to the end of the array.
	void set_el(int el);

	//method adds an element at a specific array index and expands it.
	void insert(int index, int el);

	//method removes the given element from the array.
	void remove(int el);

	//copy constructor copies an array from an old array
	SmartArray(const SmartArray& other);

	//operator [] is defined to access an array member by index.
	int& operator[](int index);

	//method removes an element from the end of an array.
	void dell_el();
	
	//displays an array.
	void print();

};
