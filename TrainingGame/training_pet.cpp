#include "training_swords.cpp"
using namespace std;

class pet{
public:

    string rarity;
    float multipler;
    string name;
    bool owned; 

pet(string a, string b, float c){

    name = a;
    rarity = b;
    multipler = c;

}

};

pet const dog("Dog", "Common", 2);
pet const cat("Cat", "Common", 2.5);
pet const rat("Rat", "Common", 3);
pet const monkey("Monkey", "Uncommon", 3);
pet const sheep("Sheep", "Uncommon", 4);
pet const horse("Horse", "Uncommon", 5);
pet const elephant("Elephant", "Rare", 7);
pet const parrot("Parrot", "Rare", 9);
pet const duck("Duck", "Rare", 10);
pet const crocodile("Crocodile", "Legendary", 10);
pet const lion("Lion", "Legendary", 15);
pet const eagle("Eagle", "Legendary", 20);
pet const phoneix("Phoneix", "Mythical", 50);
pet const golem("Golem", "Mythical", 75);
pet const dragon("Dragon", "Mythical", 100);







