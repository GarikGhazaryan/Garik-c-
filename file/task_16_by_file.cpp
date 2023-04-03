#include <iostream>
#include <fstream>
#include <string>

void run_test (std::ifstream& input, std::ofstream& output);
int get_rev_num(int num);
void user_input();

int main(int argc, char* argv[]) {


	if (argc>1 && std::string(argv[1])=="-t") { 	// open the input file for reading

			std::ifstream input("input.txt"); 
			if (!input.is_open()) {
			std::cout << "Unable to open input file" << std::endl;
			exit (1);
			}

		std::ofstream output("output.txt"); 	// open an output file for recording
		if (!output.is_open()) {
			std::cout << "Unable to open output file" << std::endl;
			exit (1);
			}
		run_test(input, output);	//calling the test mode
		input.close();
		output.close();
	}else if(argc==1){					//calling user input mode
		user_input();
	}else{					//Incorrect script execution
		std::cout<<"error argument:"<<std::endl; 
		std::cout<<"error argument:for user mode-> run without argument"<<std::endl; 
		std::cout<<"error argument:for test mode-> run with (-t)"<<std::endl; 
	}
	return 0;
}
// test mode function
void run_test (std::ifstream& input, std::ofstream& output) {

	std::string line;
	while (getline(input, line)) { 		//read the file 
		try{
			int num=stoi(line); 			// convert string to integer
			if(num!=0){
				get_rev_num(num);
				std::cout <<"Output data is    "<<get_rev_num(num)<< std::endl;
				output << get_rev_num(num) <<std::endl; 		// write number to output file
			}else{
				throw std::runtime_error("error : num is = 0");
			}
		}	
		catch (const std::invalid_argument& e) { 	// if unable to convert string to integer
			std::cout<< "Invalid input: " <<line<< e.what()<< std::endl; 
		}
		catch (const std::exception& e)					// if num is = 0
		{
			std::cout << e.what()<<std::endl;
		}	
		catch (...){
			std::cout<<"other problem"<<std::endl;
		}
	}
}
//reverse the input number and add a zero between the digits
int get_rev_num(int num){
	
		int miavor=0;
		int tmp=0;
		while (num != 0) {
			miavor = num % 10;
			num =num/10;
			tmp = (tmp*10+ miavor)*10;
		}
		return tmp;
}
// user input function
void user_input(){

		int num;
		bool end= true;
		while (end) 
		{
			std::cout << "Enter a number	";
			int num;
			std::cin >> num;

			if (std::cin.fail()) // if extraction fails
			{
				std::cout<<"Please input a integer type data"<<std::endl;
				std::cin.clear(); 
				std::cin.ignore(32767,'\n');
			}
			else{	 //	if data is correct 
				get_rev_num(num);
				end= false;
				std::cout <<"Output data is   "<<get_rev_num(num) << std::endl;
			}
		}
}
