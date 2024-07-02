#include <iostream>
#include "pp_tree.cpp"

using namespace std;

class fruit: public plant{
public:

    bool sweety;

    fruit(string x, string y, string z, string a, string b, bool c){

        name = x;
        kind = y;
        season = z;
        explanation = a;
        color = b;
        sweety = c;

    }

};

