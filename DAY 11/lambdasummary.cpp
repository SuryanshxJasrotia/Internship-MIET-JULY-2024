/* Lambda functions are similar to user-defined functions but without a name.
 They're commonly referred to as anonymous functions.
  Lambda functions are efficient whenever you want to create a function that will only contain simple expressions – 
  that is, expressions that are usually a single line of a statement */

  /*
  Lambda expression in C++
Last Updated : 07 Oct, 2022
C++ 11 introduced lambda expressions to allow inline functions which can be used for short snippets of code that are not going to be reused and therefore do not require a name. In their simplest form a lambda expression can be defined as follows: 

[ capture clause ] (parameters) -> return-type  
{   
   definition of method   
} 
Generally, the return-type in lambda expressions is evaluated by the compiler itself and we don’t need to specify it explicitly. Also the -> return-type part can be ignored.  However, in some complex cases e.g. conditional statements, the compiler can’t determine the return type and explicit specification is required. 
Various uses of lambda expression with standard functions are given below :
 
  
  */


 /*
 A lambda expression can have more power than an ordinary function by having access to variables from the enclosing scope. We can capture external variables from the enclosing scope in three ways : 
      Capture by reference 
      Capture by value 
      Capture by both (mixed capture)
Syntax used for capturing variables : 
      [&] : capture all external variables by reference 
      [=] : capture all external variables by value 
      [a, &b] : capture a by value and b by reference
A lambda with an empty capture clause [ ] can only access variables which are local to it. 
Different methods of capturing are demonstrated below :
 */



/*
// C++ program to demonstrate lambda expression in C++
#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v1 = {3, 1, 7, 9};
	vector<int> v2 = {10, 2, 7, 16, 9};

	// access v1 and v2 by reference
	auto pushinto = [&] (int m)
	{
		v1.push_back(m);
		v2.push_back(m);
	};

	// it pushes 20 in both v1 and v2
	pushinto(20);

	// access v1 by copy
	[v1]()
	{
		for (auto p = v1.begin(); p != v1.end(); p++)
		{
			cout << *p << " ";
		}
	};

	int N = 5;

	// below snippet find first number greater than N
	// [N] denotes, can access only N by value
	vector<int>:: iterator p = find_if(v1.begin(), v1.end(), [N](int i)
	{
		return i > N;
	});

	cout << "First number greater than 5 is : " << *p << endl;

	// function to count numbers greater than or equal to N
	// [=] denotes, can access all variable
	int count_N = count_if(v1.begin(), v1.end(), [=](int a)
	{
		return (a >= N);
	});

	cout << "The number of elements greater than or equal to 5 is : "
		<< count_N << endl;
}


Output: 

First number greater than 5 is : 7
The number of elements greater than or equal to 5 is : 3

*/



