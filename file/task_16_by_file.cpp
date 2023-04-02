#include <iostream>
#include <fstream>
#include <string>


int main() {

	std::ifstream input("input.txt"); 			// open the input file for reading
    if (!input.is_open()) {
			std::cout << "Unable to open input file" << std::endl;
        return 1;
    }

	std::ofstream output("output.txt"); 	// open an output file for recording
    if (!output.is_open()) {
			std::cout << "Unable to open output file" << std::endl;
        return 1;
    }
	

	std::string line;
    while (getline(input, line)) { 		//read the file step by step
    	try{
            int num=stoi(line); 			// convert string to integer
	 		if(num!=0){
                int tmp=0;
                while (num != 0) {
                    int miavor = num % 10;
                    num =num/10;
                    tmp = (tmp*10+ miavor)*10;
            }
                    std::cout <<"Output data is         "<<tmp << std::endl;
            		output << tmp <<std::endl; 		// write number to output file
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
    input.close();
    output.close();
    return 0;
}
