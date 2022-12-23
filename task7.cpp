#include <iostream>
using namespace std;
main()
{
string movie;
float AdultPrice;
float ChildPrice;
int NumAdult;
int NumChild;
float percentage;
float total;
float donation;
float AfterAmount;

cout << "Enter movie Name: ";
cin >> movie;
cout << "Enter Adult Ticket Price: ";
cin >> AdultPrice;
cout << "Enter Child Ticket Price: ";
cin >> ChildPrice;
cout << "Enter Number of Adult Tickets Sold: ";
cin >> NumAdult;
cout << "Enter Number of Child Tickets Sold: ";
cin >> NumChild;
cout << "Enter Percentage to Donate: ";
cin >> percentage;
total = (AdultPrice * NumAdult) + (ChildPrice * NumChild);
donation = (percentage * total) / 100;
AfterAmount = total - donation;
cout << "Total Amount Generated: " << total << endl;
cout << "Amount After donation: " << AfterAmount;
}