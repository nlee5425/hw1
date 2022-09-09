#include "split.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
  Node *a = new Node(4, nullptr);
  Node *b = new Node(7, a);
  Node *c = new Node(9, b);
  Node *d = new Node(6, c);
  Node *e = new Node(154, d);
  Node *f = new Node(155, e);

  Node *odds = nullptr;
  Node *evens = nullptr;

  split( f,  odds,  evens);
  
  while ( odds != nullptr) {
    cout << odds->value << endl;
    odds = odds->next;
  }
  cout << "break" << endl;
  while ( evens != nullptr) {
    cout << evens->value << endl;
    evens = evens->next;
  }
  delete a;
  delete b;
  delete c;
  delete d;
  delete e;
  delete f;
  return 0;
}