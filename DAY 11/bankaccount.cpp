#include<bits/stdc++.h>
using namespace std;
class bankaccount{
    private:
        mutable string name;
        long int accountno;  //can not change account number
        mutable  string phoneno;
        mutable double ballance;
    public:
        bankaccount(){cout<<"WELLOCOME TO BANK "<<endl;};
        void addaccount(string n, long int acc, string ph, double ball){
            name=n;
            accountno=acc;
            phoneno=ph;
            ballance=ball;
        }
        void transaction(int key, long int accountno){
            switch (key)
            {
            case 1:
                double amt;
                cout<<"Enter the ammount to be credited : ";
                cin>>amt;
                ballance+=amt;
                cout<<endl;
                break;
            case 2:
                double amt2;
                cout<<"Enter the ammount to be debited: ";
                cin>>amt;
                ballance-=amt2;
                cout<<endl;
                break;
            case 3:
                cout<<"Amount available : ";
                cout<<ballance<<endl;
                break;
            
            
            default:
                cout<<"INVALID OPERATION \nGoing to main window\n";
                break;
            }
        }
        void updatedname(string n){
            name=n;
        }
        void updatephoneno(string ph){
            phoneno=ph;
        }
        void displayall(){
            cout<<"NAME : "<<name<<endl;
            cout<<"PHONE NUMBER : "<<phoneno<<endl;
            cout<<"ACCOUNT NUMBER : "<<accountno<<endl;
            cout<<"BALLANCE : "<<ballance<<endl;
        }

};
int main(){
    bankaccount a1;
    a1.addaccount("Aryan",7,"7051345437",999999.99);
    a1.displayall();
    return 0;
}