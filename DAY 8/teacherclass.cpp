#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Teacher{
    private:
       double salary;
    public: 
        string name;
        string dept;
        string subject;
        // void changeDept(string newDept){
        //     dept=newDept;
        // }
        // void setsalary(double s){
        //     salary=s;
        // }
        // double getsalary(){
        //     return salary;
        // }
        void getInfo(){
            cout<<"Teacher name "<<name<<endl;
            cout<<"Teacher subject "<<subject<<endl;
            cout<<"TEacher department "<<dept<<endl;
            cout<<"Teacher salary "<<salary<<endl;
        }
        // Teacher(){
        //     cout<<"constructor is calling"<<endl;
        // }
    Teacher(string name,string dept,string subject,double salary){
        // name=s;
        // dept=d;
        // subject=sub;
        // salary=sal;
        this->name=name;
        this->dept=dept;
        this->subject=subject;
        this->salary=salary;
    }

};

int main(){
    Teacher t1("Aryan","CSE","OOPS",987654323987);
    // t1.name="Sarang";
    // t1.subject="Math";
    // t1.changeDept("CSE");
    t1.getInfo();
    Teacher t2(t1);

    return 0;
}