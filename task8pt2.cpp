#include <iostream>
using namespace std;
main(){
int number;
int num1;
int numA;
int numB;
int Total;

int num2;
int num3;
int num4;


cout << "Enter a 4-digit number: ";
cin >> number;
num1= number % 10;
numA= number / 10; 
num2= numA % 10;
numB= numA / 10;
num3= numB % 10;
num4= numB / 10;
Total = num1 + num2 + num3 + num4;
cout << "Sum: " << Total ;
}