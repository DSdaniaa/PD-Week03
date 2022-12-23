#include <iostream>
using namespace std;
main()
{
int weight;
int days;

cout << "Enter the weight you want to loose: ";
cin >> weight;
days = weight * 15;
cout << "It will take " << days << " days to loose " << weight << " KGs";
}