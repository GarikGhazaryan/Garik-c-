class SmartArray {
private:
    int* arr;
	int size;
	int capacity=5;

public:
	SmartArray();
	~SmartArray();
	void set_el(int el);
	void dell_el();
	void print();
};
