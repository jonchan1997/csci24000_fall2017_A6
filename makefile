a.out: Driver.o Bubble_Sort.o Insertion_Sort.o Sort.o
	g++ Sort.o Bubble_Sort.o Insertion_Sort.o Driver.o
Driver.o: Driver.cpp
	g++ -c Driver.cpp
Bubble_Sort.o: Bubble_Sort.cpp Bubble_Sort.h Sort.h
	g++ -c Bubble_Sort.cpp
Insertion_Sort.o: Insertion_Sort.cpp Insertion_Sort.h Sort.h
	g++ -c Insertion_Sort.cpp
Sort.o: Sort.cpp Sort.h
	g++ -c Sort.cpp
run: a.out
	./a.out