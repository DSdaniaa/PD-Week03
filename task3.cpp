#include <iostream>
using namespace std;
main()
{
float Initial_velocity;
int time;
float acceleration;
float final_velocity;

cout << "Enter Initial Velocity: ";
cin >> Initial_velocity;
cout << "Enter Acceleration: ";
cin >> acceleration;
cout << "Enter Time: ";
cin >> time;
final_velocity = (acceleration * time) + Initial_velocity;
cout << "Final Velocity is: " << final_velocity;
}
