#include<iostream>
#include<fstream>
using namespace std;

int main(){

    ofstream my_file("example.txt");
    //1st way
    // if(!my_file){
    // cout<<"Error opening the file !";
    // return 1;
    // }
    //2nd way
    // if(!my_file.is_open()){
    //     cout<<"error opening the file";<<endl;
    //     return 1;
    // }
    //3rd way
    if(my_file.fail()){
        cout<<"error openingthe file ! "<<endl;
        return 1;
    }
    my_file.close();

    return 0;
}


//check if the file you are trying to open is not an error 
//ofstream my_file("example.txt");;
//if(!my_file){
//print error message
//cout<<"Error opening the file !";
//}
//
//terminate the main() function
//


// second way is to use open function 
// is_open()


//third way is using the fail() function

//the fail function returns

// true if the file failed to open
