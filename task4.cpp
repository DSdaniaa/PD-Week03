#include <iostream>
using namespace std;
main()
{
int sub1;
int sub2;
int sub3;
int sub4;
int sub5;
string name;
float percentage;
cout << "Enter your name: ";
cin  >> name;
cout << "Enter subject 01 marks: ";
cin >> sub1;
cout << "Enter subject 02 marks: ";
cin >> sub2;
cout << "Enter subject 03 marks: ";
cin >> sub3;
cout << "Enter subject 04 marks: ";
cin >> sub4;
cout << "Enter subject 05 marks: ";
cin >> sub5; 
percentage = (((sub1 + sub2 + sub3 + sub4 + sub5) / 500.0) * 100);
cout << "Your Percentage is: " << percentage;
}