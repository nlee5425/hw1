#include "split.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
  //test1
  Node *a = new Node(4, nullptr);
  Node *b = new Node(7, a);
  Node *c = new Node(9, b);
  Node *d = new Node(6, c);
  Node *e = new Node(154, d);
  Node *f = new Node(155, e);

  //test2
  Node *b = nullptr;
  

  Node *odds = nullptr;
  Node *evens = nullptr;
  //for test1
  //split( f,  odds,  evens);
  
  //for test2
  
  split(b, odds, evens);
  while ( odds != nullptr) {
    cout << odds->value << endl;
    odds = odds->next;
  }
  cout << "break" << endl;
  while ( evens != nullptr) {
    cout << evens->value << endl;
    evens = evens->next;
  }
  //for test1
  // delete a;
  // delete b;
  // delete c;
  // delete d;
  // delete e;
  // delete f;
  
  //for test2
  delete b;
  return 0;
}