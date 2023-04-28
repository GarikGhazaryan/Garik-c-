Double linked list.

Sheet is designed to store various types of data. To determine the type you need. in main, when creating an object, enter the data type also in this syntax "doublell<char> list". All elements are available without limitation.

There are several methods for working with a sheet.

  is_empty() -		 checks for the presence of elements.
  get_size() -		 gets the number of elements.
  push_front(data ) -  adds an element to the front of the list.
  push_back(data ) - 	 adds an element to the end of the list.
  pop_front() - 		 removes an element from the front of the list.
  pop_back() - 		 removes an element from the end of the list.
  front() -	         returns the first element.
  back() -	 		 returns the last element.
  print() - 		  	 prints a list.
  insert(data , index) - adds an element by index to any place in the list.
  operator [ ] - 		 provides access by index to any element of the list and allows its editing.
  reverse()- 			 method rearranges the sheet in reverse order, the end of the sheet becomes before and before the end.


Compiling and running the program is done using Makefile commands.
  The commands is.
  <make> compiles the written code into an exe file named Queue.
  <make test> compiles the written code into an exe file and runs it.
  <make clean> removes all creation files when compiling.
