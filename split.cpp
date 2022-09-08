/*
CSCI 104: Homework 1 Problem 1

Write a recursive function to split a sorted singly-linked
list into two sorted linked lists, where one has the even 
numbers and the other contains the odd numbers. Students 
will receive no credit for non-recursive solutions. 
To test your program write a separate .cpp file and #include
split.h.  **Do NOT add main() to this file**.  When you submit
the function below should be the only one in this file.
*/

#include "split.h"

/* Add a prototype for a helper function here if you need */

void split(Node*& in, Node*& odds, Node*& evens)
{
  /* Add code here */
  if ( in == nullptr ) {
    return;
  } 
  else if( in->value <= 0 ) {
    split( in->next, odds, evens);
  }
  else if ( in->value % 2 == 0 ) {
    evens = in;
    //odds = nullptr;
    split( in->next, odds, evens->next);
  }
  else {
    odds = in; 
    //evens = nullptr;  
    split( in->next, odds->next, evens);
  }
  // if (evens->value <=0) {
  //   evens = nullptr;
  // }
  // else if (odds->value <= 0) {
  //   odds = nullptr;
  // }
  if ( in->next == nullptr ) {
    if ( odds == nullptr) {
      return;
    } 
    else if ( evens == nullptr) {
      return;
    }
    if ( evens->value % 2 == 1 ) {
      evens = nullptr;
    } 
    else if ( odds->value % 2 == 0 ) {
      odds = nullptr;
    }
  }
  
  //in = nullptr;
}
/* If you needed a helper function, write it here */

// WRITE YOUR CODE HERE