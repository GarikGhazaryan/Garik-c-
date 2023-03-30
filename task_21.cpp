#include <iostream>
    int input_check();			//Inputting and checking value.
	void output(bool , bool );      //check and print output.
	bool up(int* , int);		// check if ascending. 
	bool down(int* , int );		//check if descending. 

int main() {

	std::cout<<"Input a array size"<<std::endl;
	int n=input_check();
	std::cout<<"Input a array content"<<std::endl;
	int *ar=new int [n];
	for (int i = 0; i < n; i++) {
		ar[i]=input_check();
	}
	bool upe= up(ar, n); 
	bool downe=down(ar, n);

	output(upe, downe);	
		delete[] ar;
		return 0;
}

	int input_check(){
		int n;
		std::cin >> n;
		if(!std::cin.fail()&&n>0){
					return n;
		}else if(!std::cin.fail()&&n<=0){
			std::cout<<"Please input a value > 0"<<std::endl;
			return input_check(); 	//recursion call
		}else{
			std::cin.clear(); 
  			std::cin.ignore(32767,'\n');
			std::cout<<"Please input a number "<<std::endl;
			return input_check();	//recursion call
		}
	}

bool up (int ar[], int n){
		bool up=true;

		for (int i = 1; i < n; i++) {
			if (ar[i] < ar[i-1]) {
				up=false;
			}
		}
			return up;
	}

bool down(int ar[], int n){

		bool down=true;
		for (int i = 1; i < n; i++) {
			 if (ar[i] > ar[i-1]) {
				down=false;	
			}
		}	
		return down;
	}

void output(bool up, bool down){	
		if (up)
			std::cout<<"array is sorted by ascending"<<std::endl;
		else if(down)
			std::cout<<"array is sorted by descending"<<std::endl;
		else
			std::cout<<"array is not sorted"<<std::endl;
	}
