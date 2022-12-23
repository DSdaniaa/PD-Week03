#include <iostream>
using namespace std;
main()
{
float BagSize;
float BagCost;
float Area;
float PerPound;
float AreaCost;

cout << "Enter bag size in pounds: ";
cin >> BagSize;
cout << "Enter cost of the bag: ";
cin >> BagCost;
cout << "Enter area covered by each bag in square feet: ";
cin >> Area;
PerPound = BagCost / BagSize;
AreaCost = BagCost / Area;
cout << "Cost of the fertilizer per pound: " << PerPound << endl;
cout << "cost of fertilizing the area per square feet: " << AreaCost;
}