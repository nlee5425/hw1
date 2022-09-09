/* Write your test code for the ULListStr in this file */

#include <iostream>
using namespace std;
#include "ulliststr.h"


int main(int argc, char* argv[])
{
	ULListStr test; 
	// test.push_front("4");
	// test.push_front("5");

	// test.push_back("3");
	// test.push_back("7");
	//5 4 3
	// test.pop_back();

	// cout << "pop back" << endl << test.back() << endl << "size"
	// << endl <<  test.size() << endl;
	// //should print out 4
	// test.pop_front();
	// cout << test.size()<< endl;
	// cout << "pop front" << endl << test.front() << endl <<  "size"
	// << endl << test.size() << endl;;
	//should print out 4


	// test.push_back("5");
	// for (int i = 0 ; i < 22 ; i++ ) {
	// 	test.push_front("3");
	// }
	// test.push_front("4");
	// cout << "size: " << test.size() << endl;
	// cout << "front: " << test.front() << endl;
	// cout << "back: " << test.back() << endl;
	// cout << "get: " << test.get(0) << endl;

	// for ( int i = 0 ; i < 22 ; i++ ) {
	// 	test.push_back("3");
	// }
	// cout << "size: " << test.size() << endl;
	// cout << "front: " << test.front() << endl;
	// cout << "back: " << test.back() << endl;
	// cout << "get: " << test.get(12) << endl;

	// for ( int i = 0 ; i < 22 ; i++ ) {
	// 	test.push_back("3");
	// }
	// cout << "size: " << test.size() << endl;
	// for ( int i = 0 ; i < 22 ; i++ ) {
	// 	test.pop_back();
	// }
	// cout << "size: " << test.size() << endl;

	// for ( int i = 0 ; i < 22 ; i++ ) {
	// 	test.push_front("3");
	// }
	// cout << "size: " << test.size() << endl;
	// for ( int i = 0 ; i < 22 ; i++ ) {
	// 	test.pop_front();
	// }
	// cout << "size: " << test.size() << endl;

	// for ( int i = 0 ; i < 22 ; i++ ) {
	// 	test.push_front("3");
	// }
	// cout << "size: " << test.size() << endl;
	// for ( int i = 0 ; i < 22 ; i++ ) {
	// 	test.pop_back();
	// }
	// cout << "size: " << test.size() << endl;

	// for ( int i = 0 ; i < 22 ; i++ ) {
	// 	test.push_back("3");
	// }
	// cout << "size: " << test.size() << endl;
	// for ( int i = 0 ; i < 22 ; i++ ) {
	// 	test.pop_front();
	// }
	// cout << "size: " << test.size() << endl;

	// for ( int i = 0 ; i < 5 ; i++ ) {
	// 	test.push_back("3");
	// 	test.push_back("4");
	// 	test.push_front("5");
	// 	test.push_front("6");
	// 	cout << "front: " << test.front() << endl << "back: " << test.back() << endl;
	// }

	test.push_back("3");
	cout << "back: " << test.back() << endl;
	test.pop_back();
	test.push_back("4");
	cout << "back: " << test.back() << endl;
	test.push_front("5");
	cout << "front: " << test.front() << endl;
	test.pop_front();
	test.push_front("6");
	cout << "front: " << test.front() << endl;
	




  return 0;
}
