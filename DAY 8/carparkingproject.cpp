#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

class Car{
    private:
        string licencePlate;
        string owner;
    public:
        Car(string lp,string o):licencePlate(lp),owner(o){}
        string getLicencePlate()const{
            return licencePlate;
        }
        void setdata(string a, string b){
            licencePlate=a;owner=b;
        }
        string getowner()const{
            return owner;
        }
        void display()const{
            cout<<"Licence Plate : "<<licencePlate<<",Owner : "<<owner<<endl;
        }

};
class ParkingLot{
    private:
        vector<Car>parkedCars;
        int capacity;
    public:
        ParkingLot(int cap):capacity(cap){}
        bool parkcar(const Car& car){
            if(parkedCars.size()<capacity){
                parkedCars.push_back(car);
                return true;
            }
            else{
                cout<<"Parking lot is full "<<endl;
                return false;
            }
        }
        void displayParkedCars() const {
            cout<<"Parked Cars :\n";
            for(const auto& car : parkedCars){
                car.display();
            }
        }
};

int main(){
    ParkingLot myParkingLot(3);
    Car car1("BC123","Sanjay gore");
    Car car2("YZ457","Janvi manse");
    Car car3("YZ458","XYZ");
    Car car4("YZ477","ABC");
    myParkingLot.parkcar(car1);
    myParkingLot.parkcar(car2);
    myParkingLot.parkcar(car3);
    myParkingLot.parkcar(car4);

    myParkingLot.displayParkedCars();

    return 0;
}