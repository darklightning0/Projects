#include <iostream>
#include "pp_fruit.cpp"

using namespace std;

class vegetable: public plant{
public:

    bool sweety;

    vegetable(string x, string y, string z, string a, string b, bool c){

        name = x;
        kind = y;
        season = z;
        explanation = a;
        color = b;
        sweety = c;

    }

};

