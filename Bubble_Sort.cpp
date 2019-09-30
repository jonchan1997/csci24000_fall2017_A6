/* Honor Pledge:
*
* I pledge that I have neither given nor 
* received any help on this assignment.
*
*  youngjon
*/ 

#include <iostream>
#include "Bubble_Sort.h"
#include "Sort.h"


	//performs Bubble Sort
	void Bubble_Sort::sort( int arrays[],int length){
		for (int i = 0; i < length-1; i++){	 
			for (int n = 0; n < length-i-1; n++){ 
				if (arrays[n] > arrays[n+1]){
					int save = arrays[n];
					arrays[n] = arrays[n+1];
					arrays[n+1] = save;
				
				}
			}
		}
		//Prints out sort
		std::cout<<"Bubble Sort:";
		for(int r = length - 1; r >= 0; r--){
			if(r > 0){
				std::cout<< " ";
				std::cout<< arrays[r];
				std::cout<< ",";
			} else if (r == 0){
				std::cout<< " ";
				std::cout<< arrays[r];
				std::cout<< std::endl;
			}
		}
		
	}
	
	
	
