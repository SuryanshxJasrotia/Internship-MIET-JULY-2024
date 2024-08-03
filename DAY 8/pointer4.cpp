#include <iostream>

using namespace std;

int main(){

  int scores[10] {11,12,13,14,15,16,17,18,19,20};

  int * p_score { scores};

  //Print the address

  cout << "scores : " << scores << endl; // Array

  cout << "p_score : " << p_score << endl; // Pointer

  cout << "&scores[0] : " << &scores[0] << endl;

  //Print the content at that address

  cout << endl;

  cout << "Printing out data at array address : " << endl;

  cout << "*scores : " << *scores << endl;

  cout << "scores[0] : " << scores[0] << endl;

  cout << "*p_score : " << *p_score << endl;

  cout << "p_score[0] : " << p_score[0] << endl;

  //Differences

  int number {21};

  p_score = &number;

  //scores = &number; // The array name is a pointer, but a special pointer that kind of identifies

            // the entire array. You'll get the error : incompatible types in assignment

           // of 'int*' to 'int[10]'

  cout << "p_score : " << p_score << endl;// Pointer

 //size() doesn't work for raw pointers

 cout << "size : " << size(scores) << endl;

 //cout << "size : " << size(p_score) << endl; // Compiler error.

  return 0;

}







