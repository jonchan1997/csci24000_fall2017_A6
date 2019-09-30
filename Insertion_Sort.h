/* Honor Pledge:
*
* I pledge that I have neither given nor 
* received any help on this assignment.
*
*  youngjon
*/ 

#ifndef INSERTION_SORT_H
#define	INSERTION_SORT_H

#include "Sort.h"

class Insertion_Sort : public Sort {
	public:
	Insertion_Sort(){};
	void sort(int arrays[],int length);
	
};
#endif