#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
#include<ostream>
#include <thread>
using namespace std;



const int Pen{ 10 };

const int Marker{ 20 };

const int Eraser{ 30 };

const int Rectangle{ 40 };

const int Circle{ 50 };

const int Ellipse{ 60 };

int main(){

  int tool {Eraser};

  switch (tool)

  {

    case Pen : {

       cout << "Active tool is Pen" << endl;

    }

    break;

    case Marker : {

       cout << "Active tool is Marker" << endl;

    }

    break;

 //if (tool==Eraser || tool==Rectangle || tool==Circle) {

   //cout << "Drawing Shapes" << endl;

 //}

    case Eraser :

    case Rectangle :

    case Circle : {

       cout << "Drawing Shapes" << endl;

    }

    break;

    case Ellipse : {

       cout << "Active tool is Ellipse" << endl;

    }

    break;

    default: {

      cout << "No match found" << endl;

    }

      break;

  }

  cout << "Moving on" << endl;

  /*

  // Condition can only be integer of enum (We'll learn about enums later in the course)

  string name {"John"};

  switch (name) // Compiler error!

  {

  }

  */

  return 0;

}
