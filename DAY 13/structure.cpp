//Structure in cpp
// Created on: 13-10-2021
// Structure is a user-defined data type in C++ that allows us to store multiple items of different data types.
// Structure is used to represent a record. Suppose you want to store the information about a person: his/her name, citizenship number, and salary. You can easily create a structure to hold this information.
// Syntax:
// struct structure_name
// {
//     data_type member1;
//     data_type member2;
// }
// Here, structure_name is the name of the structure, and member1, member2 are the members of the structure.
// Example:
// struct Person
// {
//     char name[50];
//     int citizenshipNumber;
//     float salary;
// };
// In the above example, we have created a structure Person with three members: name, citizenshipNumber, and salary.
// To access the members of the structure, we use the dot (.) operator.
// Example:
// Person p1;
// strcpy(p1.name, "John");
// p1.citizenshipNumber = 123456;
// p1.salary = 1200.75;
// In the above example, we have created a structure variable p1 of type Person and assigned values to its members.
// We can also create an array of structures.
// Example:
// Person p[3];
// In the above example, we have created an array of structures p of size 3.
// We can access the members of the structure using the dot (.) operator.
// Example:
// strcpy(p[0].name, "John");
// p[0].citizenshipNumber = 123456;
// p[0].salary = 1200.75;
// In the above example, we have assigned values to the members of the first structure in the array.
// We can also pass a structure to a function.
// Example:
// void display(Person p)
// {
//     cout << "Name: " << p.name << endl;
//     cout << "Citizenship Number: " << p.citizenshipNumber << endl;
//     cout << "Salary: " << p.salary << endl;
// }
// In the above example, we have created a function display that takes a structure Person as an argument and displays its members.
// We can also return a structure from a function.
// Example:
// Person getPerson()
// {
//     Person p;
//     strcpy(p.name, "John");
//     p.citizenshipNumber = 123456;
//     p.salary = 1200.75;
//     return p;
// }
