difference_of_squares: difference_of_squares.o 
	g++ -o difference_of_squares difference_of_squares.o

difference_of_squares.o: difference_of_squares.cc
	g++ -c difference_of_squares.cc

clear:
	rm *.o 

clear1: 
	rm difference_of_squares