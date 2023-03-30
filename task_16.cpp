#include <iostream>

void rev_num(int);					//getting a digit and adding 0․
int input(int *ptr, int);           //input data acceptance and error checking․		


int main(){

		int num;
		int *ptr=&num;
		input(ptr,num);		
		rev_num(num);			
}

int input(int *ptr,int num){		
		
		std::cout<<"Please enter a number   ";		
	std::cin >> num;
	if (!std::cin.fail()){
		*ptr=num;
	}else{
		std::cin.clear(); 
  		std::cin.ignore(32767,'\n');
		std::cout<<"Incorrect data entered"<<std::endl;		
		std::cout<<"_______________________"<<std::endl;		
		input(ptr,num);         //function call on wrong input case․		
	}
	return 0;
}

void rev_num(int num){			
		int tmp=0;
		while (num != 0) {
    	    int miavor = num % 10;
        	num =num/10;
       		tmp = (tmp*10 + miavor)*10;
    	}
    	std::cout <<"Output data is         "<<tmp << std::endl;
}
