#include "split.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
  //test1
  // Node *a = new Node(4, nullptr);
  // Node *b = new Node(7, a);
  // Node *c = new Node(9, b);
  // Node *d = new Node(6, c);
  // Node *e = new Node(154, d);
  // Node *f = new Node(155, e);

  //test2 no value
  //Node *b = nullptr;
  
  //test3 all even
  // Node *a = new Node(4, nullptr);
  // Node *b = new Node(6, a);
  // Node *c = new Node(144, b);
  // Node *d = new Node(120, c);
  // Node *e = new Node(154, d);
  // Node *f = new Node(134, e);

  //test 4 all odd
  // Node *a = new Node(5, nullptr);
  // Node *b = new Node(7, a);
  // Node *c = new Node(145, b);
  // Node *d = new Node(121, c);
  // Node *e = new Node(155, d);
  // Node *f = new Node(135, e);

  //test5 negative numbers
  // Node *a = new Node(4, nullptr);
  // Node *b = new Node(6, a);
  // Node *c = new Node(-144, b);
  // Node *d = new Node(120, c);
  // Node *e = new Node(154, d);
  // Node *f = new Node(134, e);

  //test6 zero
  // Node *a = new Node(4, nullptr);
  // Node *b = new Node(6, a);
  // Node *c = new Node(0, b);
  // Node *d = new Node(120, c);
  // Node *e = new Node(154, d);
  // Node *f = new Node(134, e);

  Node *odds = nullptr;
  Node *evens = nullptr;

  
  //for test2
  //split(b, odds, evens);

  //for test #1, 3, 4, 5, 6
  split(f, odds, evens);
  
  while ( odds != nullptr) {
    cout << odds->value << endl;
    odds = odds->next;
  }
  cout << "break" << endl;
  while ( evens != nullptr) {
    cout << evens->value << endl;
    evens = evens->next;
  }
  //for test #1,3,4,5,6
  delete a;
  delete b;
  delete c;
  delete d;
  delete e;
  delete f;
  
  //for test2
  //delete b;

  
  return 0;
}