#include <iostream>
#include <string>

using namespace std;

class Vehicle {
protected:
int avg_speed;
string fuel_type;
int year_of_birth;

public:
Vehicle(int _avg_speed, string _fuel_type, int _year_of_birth)
{
    avg_speed = _avg_speed;
    fuel_type = _fuel_type;
    year_of_birth = _year_of_birth;
}
void print()
{
    cout << "avg_speed: " << avg_speed << " fuel_type: " << fuel_type << " year: " << year_of_birth << endl;
}

};

class Auto : Vehicle {
private:
int num;
string car_type;

public:
void print()
{
    cout << " num: " << num << " car_type: " << car_type << "\n";
}

Auto(int _num, string _car_type, int avg, string fl, int yt): Vehicle(avg_speed, fuel_type, year_of_birth) {
    num = _num;
    car_type = _car_type;
    avg_speed = avg;
    fuel_type = fl;
    year_of_birth = yt;
}

void printA()
{
    cout << "avg_speed: " << avg_speed << " fuel_type: " << fuel_type << " year: " << year_of_birth << " num: " << num << "car_type: " << car_type << endl;
}

};

class Train : Vehicle {
private:
int num;
int amount_of_wagons;
int amount_of_passengers;

public:
Train(int _num, int aow, int aop, int avg, string fl, int yt) : Vehicle(avg_speed, fuel_type, year_of_birth){
    num = _num;
    amount_of_passengers = aop;
    amount_of_wagons = aow;
    avg_speed = avg;
    fuel_type = fl;
    year_of_birth = yt;
}
void printT()
{
    cout << "avg_speed: " << avg_speed << " fuel_type: " << fuel_type << " year: " << year_of_birth << " num: " << num << " amount_of_wagons: " << amount_of_wagons<< " amount_of_passengers: " << amount_of_passengers << endl;
}
};

int main()
{
  
    Train bruh2(13, 4, 4, 200, "electricity", 2057);
    Auto bruh3(54, "Maseratti", 10, "gasoline", -15);

    bruh2.printT();
    bruh3.printA();
}