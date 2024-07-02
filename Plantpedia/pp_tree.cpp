#include <iostream>
#include "pp_flower.cpp"

using namespace std;

class tree: public plant{
public:

    string leaf_type;

    tree(string x, string y, string z, string a, string b){

        name = x;
        kind = y;
        season = z;
        explanation = a;
        leaf_type = b;

    }

};
