#include <iostream>

class Node {
public:
	int data;
	Node* left;
	Node* right;
	Node(int dta) {
		data = dta;
		left= nullptr;
		right =nullptr;
	}
};

class Binary{
public:
	Node* root;
	
	Binary(){
		root = nullptr;
	}
	
	void insert(int data){
		Node* newnod = new Node(data);
		if(root == nullptr){
			root = newnod;
			return;
		}

		Node* tmp =root;
		while(tmp != nullptr){
			if(data < tmp->data){
				if(tmp->left == nullptr){
					tmp->left = newnod;
					return;
				}
				tmp = tmp->left;
			} else {
				if(tmp->right == nullptr){
					tmp->right = newnod;
					return;
				}
				tmp = tmp->right;
			}
		}
	}

};

int main() {
	Binary b;
	b.insert(4);
	b.insert(2);
	b.insert(1);
	b.insert(7);
	b.insert(8);
	b.insert(9);
	b.insert(5);
	b.insert(6);
//	b.print();
	std::cout<<b.root->data<<std::endl;
	std::cout<<b.root->left->data<<std::endl;
	std::cout<<b.root->right->data<<std::endl;
	std::cout<<b.root->right->right->data<<std::endl;

}

