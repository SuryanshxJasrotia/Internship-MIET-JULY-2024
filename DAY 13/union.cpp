// Union in cpp
// Created on: 13-10-2021
//Union is a user-defined data type in C++ that allows us to store multiple items of different data types in the same memory location.
//Union is similar to structure, but the difference is that in structure, each member has its own memory location, whereas in union, all members share the same memory location.
//Syntax:
//union union_name
//{
//    data_type member1;
//    data_type member2;
//};
//Here, union_name is the name of the union, and member1, member2 are the members of the union.
//Example:
//union Data
//{
//    int x;
//    float y;
//};
//In the above example, we have created a union Data with two members: x and y.
//To access the members of the union, we use the dot (.) operator.
//Example:
//Data d;
//d.x = 10;
//cout << d.x << endl;
//In the above example, we have created a union variable d of type Data and assigned a value to its member x.
//We can also create an array of unions.
//Example:
//Data d[3];
//In the above example, we have created an array of unions d of size 3.
//We can access the members of the union using the dot (.) operator.
//Example:
//d[0].x = 10;
//cout << d[0].x << endl;
//In the above example, we have assigned a value to the member x of the first union in the array.
//We can also pass a union to a function.
//Example:

//void display(Data d)
//{
//    cout << d.x << endl;
//    cout << d.y << endl;

//}

//In the above example, we have created a function display that takes a union Data as an argument and displays its members.
//We can also return a union from a function.
//Example:
//Data getData()
//{
//    Data d;
//    d.x = 10;
//    d.y = 20.5;
//    return d;
//}
//In the above example, we have created a function getData that returns a union Data.
//In this example, we have created a union Data with two members: x and y. We have created a union variable d of type Data and assigned values to its members. We have also created a function display that takes a union Data as an argument and displays its members. We have created a function getData that returns a union Data.
//Note: In a union, all members share the same memory location, so changing the value of one member will affect the value of other members.
//Note: The size of a union is the size of its largest member.
//Note: The members of a union are stored in the same memory location, so only one member can be accessed at a time.
//Note: Unions are used when we need to store different types of data in the same memory location.
//Note: Unions are used to save memory space.
//Note: Unions are used when we need to access only one member at a time.
//Note: Unions are used when we need to store different types of data in the same memory location.
//Note: Unions are used to save memory space.
//Note: Unions are used when we need to access only one member at a time.


