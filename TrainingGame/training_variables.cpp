#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "training_pet.cpp"


using namespace std;

int static ui;

int static strength = 0;

int static money = 0;

int static sword_mp = 0;

int static pet_mp = 1;

int static spt = (1 + sword_mp) * pet_mp; //strength per train










pet static normal_egg[5] = {dog, monkey, elephant, crocodile, phoneix};
pet static silver_egg[5] = {cat, sheep, parrot, lion, golem};
pet static golden_egg[5] = {rat, horse, duck, eagle, dragon};
pet static pets[15] = {rat, horse, duck, eagle, dragon, cat, sheep, parrot, lion, golem, dog, monkey, elephant, crocodile, phoneix};
sword static swords[10] = {wood, stone, plastic, copper, iron, golden, diamond, emerald, ruby, quartz};

void static read_values(){
ifstream dataFile("trainingsave.txt", ios::in);
if(dataFile.good() && !dataFile.fail()) {
    dataFile >> strength >> money >> sword_mp >> pet_mp >> spt;
    for(int w = 0; w <= 4; w++){
        dataFile >> normal_egg[w].owned;
        dataFile >> silver_egg[w].owned;
        dataFile >> golden_egg[w].owned;
    }
    for(int q = 0; q <= 9; q++){
        dataFile >> swords[q].owned;
    }
      }
      dataFile.close();
}


void static save_values(){
    ofstream outputFile("trainingsave.txt", ios::out);
    outputFile << strength << " " << money << " " << sword_mp << " "<< pet_mp << " " << spt << endl;
    for(int t = 0; t <= 4; t++){
        outputFile <<normal_egg[t].owned << endl;
        outputFile <<silver_egg[t].owned << endl;
        outputFile <<golden_egg[t].owned << endl;
    }
    for(int q = 0; q <= 9; q++){
        outputFile << swords[q].owned << endl;
    }
    outputFile.close();
}
