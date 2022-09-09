To compile:
g++ -g -Wall ulliststr.cpp ulliststr_test.cpp -o ulliststr

To run: 
./ulliststr

To run valgrind:
valgrind --tool=memcheck --leak-check=yes ./ulliststr