#include <iostream>
using namespace std;
main() {
float vegPrice;
float fruitPrice;
int totalveg;
int totalfruit;
float fruitcost;
float vegcost;
float Total;



cout << "Enter Vegetable price per KG: ";
cin >> vegPrice;
cout << "Enter fruit price per KG: ";
cin >> fruitPrice;
cout << "Enter total KGs of vegetables: ";
cin >> totalveg;
cout << "Enter total KGs of fruit: ";
cin >> totalfruit;
fruitcost = (fruitPrice * totalfruit) / 1.94;
vegcost = (totalveg * vegPrice) / 1.94;
cout << "Vegtable Cost in Rs: " << vegcost << endl;
cout << "Fruit Cost in Rs: " << fruitcost; 
Total = fruitcost + vegcost;
cout << "Total: " << Total;


}