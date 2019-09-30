/* Honor Pledge:
*
* I pledge that I have neither given nor 
* received any help on this assignment.
*
* Youngjon
*/

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <string>
#include "Sort.h"
#include "Bubble_Sort.h"
#include "Insertion_Sort.h"

using namespace std;

int main(){
	//checks outer loop
	int outerL = 1;
	// response
	int response = 0;
	
	
	while(outerL == 1){
		
		cout << endl;
		cout << "1. Load Data (From File)" << endl;
		cout << "2. Exit Program" << endl;
		cout << "Please enter your selection:" << endl;
		cout << endl;
		// user input
		cin >> response;
		cout << endl;
		if( response == 1){
			// loads txt file
			int len = 0;
			string line;
			stringstream ss;
			int num[100];
			ifstream inputText ("data.txt");
			if (inputText.is_open()){
				// reads in each number to integer
				while( getline(inputText, line, ',')){
					ss << line;
					ss >> num[len];
					ss.str("");
					ss.str( std::string() );
					ss.clear();
					len++;
				}
				inputText.close();
			}
			//prints unsorted array
			cout << "Unsorted Array:";
			for( int i = 0; i <= len; i++){
				if(i < len-1){
					cout<<" ";
					cout<<num[i];
					cout<<",";
				} else if ( i == len - 1){
					cout<<" ";
					cout<<num[i]<<endl;
					//Sort->sort();
				}
			}
			// check inner loop
			int innerL = 1;
			response = 0;
			while (innerL == 1){
				cout << endl;
				cout << "1. Insertion Sort" << endl;
				cout << "2. Bubble Sort" << endl;
				cout << "3. Exit Program" << endl;
				cout << "Please enter your selection:" << endl;
				cout << endl;
				//user input
				cin >> response;
				cout << endl;
				if( response == 1){
					Sort* sort = new Insertion_Sort;
					Insertion_Sort* SortI = dynamic_cast<Insertion_Sort*>(sort);
					// instertion sort
					sort->sort(num, len);
					innerL = 0;
					response = 0;
					delete sort;
					
				} else if( response == 2){
					Sort* sort = new Bubble_Sort;
					Bubble_Sort* SortB = dynamic_cast<Bubble_Sort*>(sort);
					//bubble sort
					sort->sort(num, len);
					innerL = 0;
					response = 0;
					delete sort;
					
				} else if( response == 3){
					//exit program
					innerL = 0;
					outerL = 0;
					break;
			
				} else {
					response = 0;
					continue;
				}
			}
			
		
		} else if( response == 2){
			//exit program
			outerL = 0;
			break;
		} else {
			response = 0;
			continue;
		}
	}
	
	return 0;
}