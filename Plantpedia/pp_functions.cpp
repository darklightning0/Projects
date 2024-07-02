#include <iostream>
#include "pp_variables.cpp"

using namespace std;



void static mainmenu(){

cout<<endl<<"Welcome to the Plantpedia! Please enter the number of the action. Enter 999 anytime if you want to exit the program."<<endl<<endl;
cout<<"[0] Library"<<endl<<"[1] What Can I Plant"<<endl<<"[2] Credits"<<endl<<"[999] Exit"<<endl;
cin>>ui;

}



void static library(){

cout<<endl<<"Welcome to the Library! Enter the number of the plant that you want to learn more."<<endl<<"Enter 0 to go back."<<endl<<endl;

for(int i=1; i != 13; i++){

    cout<<"["<<i<<"] "<<plants[i-1].name<<endl;

}

cin>>ui;

if(ui == 0){
    return;
}

cout<<endl<<"Enter 0 to go back. Enter 999 to exit the program."<<endl<<endl;
cout<<"Name: "<<plants[ui-1].name<<endl<<"Kind: "<<plants[ui-1].kind<<endl<<"Season: "<<plants[ui-1].season<<endl<<"Explanation: "<<plants[ui-1].explanation<<endl;

    cin>>ui;

if(ui == 0){
    library();
}


}



void static wcip(){ //What Can I Plant

plant static a;


cout<<endl<<"Answer the questions and we will tell you what can you plant."<<endl<<endl;
cout<<"What kind of a plant do you want to plant? (Flower, Tree, Fruit, Vegetable)"<<endl;

cin>>a.kind;


cout<<endl<<endl<<"Which season are you in? (Summer, Fall, Winter, Spring)"<<endl;

cin>>a.season;



cout<<endl<<endl<<"You can grow:"<<endl;

for(int i = 0; i != 12; i++){

    if(plants[i].kind == a.kind && plants[i].season == a.season){

        cout<<plants[i].name<<endl<<endl;

    }

}
cout<<"Enter 0 to go back or enter 999 to exit the program."<<endl;

cin>>ui;

if(ui == 0){
    return;
}
}



void static credits(){

cout<<"All coding work is done by Efe Kapukulak. Also special thanks to Tolga Akman who contributed to Plantpedia."<<endl;
cout<<"Enter 0 to go back or enter 999 to exit the program."<<endl;

cin>>ui;

if(ui == 0){
    return;
}


}