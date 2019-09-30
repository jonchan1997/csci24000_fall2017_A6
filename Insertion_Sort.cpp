/* Honor Pledge:
*
* I pledge that I have neither given nor 
* received any help on this assignment.
*
*  youngjon
*/ 
#include <iostream>
#include "Insertion_Sort.h"
#include "Sort.h"

	//performs Insertion Sort
	void Insertion_Sort::sort( int arrays[],int length){
		for (int i = 1; i < length; i++){
			int save = arrays[i];
			int n = i-1;
			while (n >= 0 && arrays[n] > save){
				arrays[n+1] = arrays[n];
				n = n-1;
			}
			arrays[n+1] = save;
		}
		//prints Sort results
		std::cout<<"Insertion Sort:";
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