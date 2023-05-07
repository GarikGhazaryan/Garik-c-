#include <iostream>

template<typename T>
class Node {
public:
	T data;
	Node<T>* prev;
	Node<T>* next;

	Node(T dta) {
		data = dta;
		prev = nullptr;
		next = nullptr;
	}
};

template<typename T>
class doublell{
private:
	Node<T>* first;
	Node<T>* last;
	int m_size;
public:
	// constructor
	doublell() {
		first = nullptr;
		last = nullptr;
		m_size = 0;
	}
	
	//destructor 
	//iterates through the sheet element by element, remembers the next element and deletes the current element
	~doublell() {
		Node<T>* del = first;
		while (del != nullptr) {
			Node<T>* next = del->next;
			delete del;
			// std::cout<<"dest"<<std::endl;
			del = next;
		}
	}
	
	//If there are no elements in the list, returned true . If the sheet has at least one element, returned false.	
	bool is_empty() {
		return first == nullptr;
	}
	
	// counts the length of the sheet
	int get_size(){
		int size=0;
		Node<T>* tmp=first;
		while(tmp!=nullptr){
			tmp=tmp->next;
			size++;
		}
		return size;
	}
	
	//adds a new element to the front of the sheet.
	void push_front(T data) {
		Node<T>* nn = new Node<T>(data);
		if (is_empty()) {
			first = nn;
		}else {
			first->prev = nn;
		}
		nn->next = first;
		first = nn;
		m_size++;
	}
	
	//adds a new element to the end of the sheet.
	void push_back(T data) {
		Node<T>* nn = new Node<T>(data);
		if (is_empty()) {
			first = nn;
		}else {
			last->next = nn;
			nn->prev = last;
		}
		last = nn;
		m_size++;
	}
	
	//the method removes the first element from the list.
	void pop_front() {
		if (is_empty()) {
			throw std::runtime_error("error from //pop_front//, the list is empty");
		}else {
			Node<T>* tmp=first;
			first= first->next;
			if (first == nullptr) {
				last=nullptr;
			}else {
				first->prev=nullptr;
			}
			delete tmp;
			m_size--;
		}
	}
	
	//method removes the last element from the list.
	void pop_back() {
		if (is_empty()) {
			throw std::runtime_error("error from //pop_back//, the list is empty");
		}else {
			Node<T>* tmp=last;
			last= last->prev;
			if (last == nullptr) {
				first=nullptr;
			}else {
				last->next=nullptr;
			}
			delete tmp;
			m_size--;
		}
	}
	
	//Front method returns the first element of the sheet
	T front() {
		return first->data;
	}
	
	//Back method returns the last element of the sheet
	T back() {
		return last->data;
	}
	
	//prints the value of the sheet elements
	void print() {
		Node<T>* curr = first;
		while (curr != nullptr) {
			std::cout << curr->data << " ";
			curr = curr->next;
		}
		std::cout << std::endl;
		std::cout <<"size "<<m_size<< std::endl;
	}
	
	//adding an element by index, the index of the first element starts from 0
	//index must be between 0 and max sheet size,
	void insert(T data, int index){
		if(index<0||index>m_size){
			throw std::out_of_range("error from //insert//, Index out of range");
		}

		if(index==0){
			push_front(data);	
		}

		if(index!=0&&index<m_size){
			Node<T>* nn = new Node<T>(data);
			Node<T>* tmp = first;
			for(int i=0;i<index;i++){
				tmp=tmp->next;		
			}
			nn->next=tmp;
			nn->prev=tmp->prev;
			tmp->prev->next=nn;
			tmp->prev=nn;
			m_size++;
		}

		if(index==m_size){
			push_back(data);	
		}
	}

	//Overloading is an index access operator
	//the index of the first element starts from 0
	T & operator[](int index) {
		if (index < 0 || index >= m_size) {
			throw std::out_of_range("Index out of range");
		}

		Node<T>* tmp = first;
		for (int i = 0; i < index; i++) {
			tmp = tmp->next;
		}
		return tmp->data;
	}
	
	//The reverse method rearranges the sheet in reverse order, the end of the sheet becomes before and before the end.
	void reverse() {
		if (first == nullptr) {
			throw std::runtime_error("error from //reverse//, empty list, nothing to reverse");
		}
		Node<T>* tmp =first;
		Node<T>*  ne=nullptr;
		Node<T>* pre=nullptr;
		while(tmp!=nullptr){
			ne=tmp->next;
			pre=tmp->prev;
			tmp->next=pre;
			tmp->prev=ne;
			pre=tmp;
			tmp=ne;
		}
		last=first;
		first=pre;
	}
	
	//This method sorts the list by comparing and, if necessary, swapping adjacent elements.
	void bubblesort() {
		if (m_size <= 1) {
			throw std::runtime_error("error from //bubblesort//, nothing to sorting");
		}

		bool swapped=true;
		while (swapped) {
			swapped=false;
			Node<T>* curr=first;

			while (curr->next!=nullptr) {
				if (curr->data>curr->next->data) {

					T temp=curr->data;
					curr->data=curr->next->data;
					curr->next->data=temp;
					swapped=true;
				}
				curr=curr->next;
			}
		}
	}

	//This method sorts the list, each element is shifted until the value of the next element is greater than the value of that element.
	void insertionsort(){
		Node<T>* sorted = nullptr;
		Node<T>* curr = first;
		Node<T>* lst = last; 
	
		while (curr != nullptr) {
			Node<T>* nextnode = curr->next;

			if (sorted == nullptr || sorted->data > curr->data) {
				curr->next = sorted;

				if (sorted != nullptr) {
					sorted->prev = curr;
				}

				sorted = curr;
				sorted->prev = nullptr;

			} else {
				Node<T>* temp = sorted;
				while (temp->next != nullptr && temp->next->data < curr->data) {
					temp = temp->next;
				} 

				curr->next = temp->next;
				curr->prev = temp;

				if (temp->next != nullptr) {
					temp->next->prev = curr;
				}

				temp->next = curr;

				if(temp->next != nullptr){
					last=temp->next;
				}

				if(lst->data<last->data){
					lst=last;
				}
				//std::cout<<temp->next->data<<std::endl;
			}
			curr = nextnode;
		}
    	first = sorted;
		last=lst;
	}
};
