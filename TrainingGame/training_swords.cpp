#include <iostream>

using namespace std;

class sword{
public:

string name;
int boost;
float owned;
int money;

sword(string a, int b, int c, bool d){

    name = a;
    boost = b;
    money = c;
    owned = d;

}

};


sword const wood("Wood Sword", 2, 10, false);
sword const stone("Stone Sword", 5, 50, false);
sword const plastic("Plastic Sword", 10, 100, false);
sword const copper("Copper Sword", 25, 200, false);
sword const iron("Iron Sword", 50, 500, false);
sword const golden("Golden Sword", 100, 1000, false);
sword const diamond("Diamond Sword", 200, 2000, false);
sword const emerald("Emerald Sword", 500, 5000, false);
sword const ruby("Ruby Sword", 1000, 20000, false);
sword const quartz("Quartz Sword", 5000, 50000, false);







