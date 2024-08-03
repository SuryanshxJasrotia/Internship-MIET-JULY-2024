#include <iostream>

using namespace std;

int main()
{

    // Declare and initialize pointer

    int *p_number{}; // Will initialize with nullptr

    double *p_fractional_number{};

    // Explicitly initialize with nullptr

    int *p_number1{nullptr};

    double *p_fractional_number1{nullptr};

    // Pointers to different variables are of the same size

    // cout << "sizeof(int) : " << sizeof(int) << endl; // 4

    // cout << "sizeof(double) : " << sizeof(double) << endl; // 8

    // cout << "sizeof(double*) : " << sizeof(double*) << endl;

    // cout << "sizeof(int*) : " << sizeof(int*) << endl; // 8

    // cout << "sizeof(p_number1) : " << sizeof(p_number1) << endl; // 8

    // cout << "sizeof(p_fractional_number1) : " << sizeof(p_fractional_number1) << endl; // 8

    // It doesn't matter if you put the * close to data type or to varible name

    // int* p_number2{nullptr};

    // int * p_number3{nullptr};

    // int *p_number4{nullptr};

    // int *p_number5{}, other_int_var{};

    // int* p_number6{}, other_int_var6{};	// Confusing as you wonder if other_int_var6

    // // is also a pointer to int. It is not.

    // // The structure is exactly the same for the

    // // previous statement

    // cout << "sizeof(p_number5) : " << sizeof(p_number5) << endl; // 8

    // cout << "sizeof(other_int_var) : " << sizeof(other_int_var) << endl; // 4

    // cout << "sizeof(p_number6) : " << sizeof(p_number6) << endl; // 8

    // cout << "sizeof(other_int_var6) : " << sizeof(other_int_var6) << endl; // 4

    // // It is better to separate these declarations on different lines though

    // int *p_number7{};

    // int other_int_var7{}; // No room for confusion this time

    // Initializing pointers and assigning them data

    // We know that pointers store addresses of variables

    // int int_var {43};

    // int *p_int{&int_var};// The address of operator (&);

    // cout << "Int var : " << int_var << endl; // 43

    // cout << "p_int (Address in memory) : " << p_int << endl; // 0x7ffdfa760bf8

    // // //You can also change the address stored in a pointer any time

    // int int_var1 {65};

    // p_int = &int_var1; // Assign a different address to the pointer

    // cout << "p_int (with different address) : " << p_int << endl; // 0x7ffdfa760bfc

    // Can't cross-assign between pointers of different types

    int *p_int1{nullptr};

    double double_var{33};

    // p_int = &double_var; // Compiler error

    // Dereferencing a pointer:

    int *p_int2{nullptr};

    int int_data{56};

    p_int2 = &int_data;

    cout << "value : " << *p_int2 // Dereferencing a pointer

         << endl; // 56

    return 0;
}
