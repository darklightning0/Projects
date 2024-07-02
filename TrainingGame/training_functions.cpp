#include "training_variables.cpp"

using namespace std;

void static mainmenu(){

    cout<<endl<<"Welcome to the Training Warriors! All of your progress saves when you leave! Please select what you want to do! Enter '999' to exit."<<endl;
    cout<<"[0] Train"<<endl<<"[1] Convert to Money"<<endl<<"[2] Market"<<endl<<"[3] Credits"<<endl;
    cin>>ui;

}



void static training(){

    cout<<"Enter '1' to train. Enter '0' to go back."<<endl;
    cin>>ui;
    while(ui != 0){

            strength = strength + spt;
            cout<<"+"<<spt<<" strength! Your new total strength is: "<<strength<<endl;
            cin>>ui;

    }
}



void static convert_money(){

    cout<<endl<<"You can convert your strengths to money. The rate is 5 strengths to 1 money."<<endl;
    cout<<"If you convert your strengths, you will gain "<<strength / 5<<" money but "<<strength % 5<<" strength will remain. Enter 1 to accept it and 0 to go back."<<endl;
    cin>>ui;

    if(ui == 1){
        money += strength / 5;
        strength = strength % 5;
        cout<<"Done!"<<endl<<"Your money: "<<money<<endl<<"Your strength: "<<strength<<endl<<endl;
    }
}



void static market(){

    cout<<"Welcome to the market! Please select what you want to do! Enter '0' to go back."<<endl;
    cout<<"[1] Eggs"<<endl;
    cout<<"[2] Swords"<<endl;

    cin>>ui;

}



void static eggs(){
    srand(time(0));
    cout<<"Pets multiple your strength gain. There are pets at different rarites. Please enter which egg do you want. Enter 0 to go back."<<endl;
    cout<<"[1] Normal Egg - 500 Money"<<endl<<"[2] Silver Egg 2000 - Money"<<endl<<"[3] Golden Egg - 50.000 Money"<<endl;
    cin>>ui;
    while(ui != 0)
        { 
            //Normal Egg
            if(ui == 1 && money >= 500){
            int random = rand() % 5;
            money = money - 500;
            if(normal_egg[random].owned == 1){
                cout<<"You got "<<normal_egg[random].name<<" but you already have that!"<<endl;
            }
            else{
                normal_egg[random].owned = 1;
                pet_mp += normal_egg[random].multipler;
                spt = (1 + sword_mp) * pet_mp;
                cout<<"You got "<<normal_egg[random].name<<"! It is "<<normal_egg[random].rarity<<"! You will get "<<spt<<" strength each time you train!"<<endl;
            }
    }
    
    
    //Silver Egg
        else if(ui == 2 && money >= 2000){
            int random = rand() % 5;
            money = money - 2000;
            if(silver_egg[random].owned == 1){
                cout<<"You got "<<silver_egg[random].name<<" but you already have that!"<<endl;
            }
            else{
                silver_egg[random].owned = 1;
                pet_mp += silver_egg[random].multipler;
                spt = (1 + sword_mp) * pet_mp;
                cout<<"You got "<<silver_egg[random].name<<"! It is "<<silver_egg[random].rarity<<"! You will get "<<spt<<" strength each time you train!"<<endl;
            }
    }
  
        // Golden Egg
        else if(ui == 3 && money >= 50000){
            int random = rand() % 5;
            money = money - 50000;
            if(golden_egg[random].owned == 1){
                cout<<"You got "<<golden_egg[random].name<<" but you already have that!"<<endl;
            }
            else{
                golden_egg[random].owned = 1;
                pet_mp += golden_egg[random].multipler;
                spt = (1 + sword_mp) * pet_mp;
                cout<<"You got "<<golden_egg[random].name<<"! It is "<<golden_egg[random].rarity<<"! You will get "<<spt<<" strength each time you train!"<<endl;
            }
    }
    else{
                cout<<"You don't have enough money. Your money: "<<money<<endl;
            }
    cin>>ui;
    }
}



void static swordss(){
    cout<<"Swords increase your strength gain. Please enter which sword do you want. Enter 0 to go back."<<endl<<endl;
    for(int f = 0; f<10; f++){
        cout<<"["<<f+1<<"] "<<swords[f].name<<" - "<<swords[f].money<<" Money"<<endl;
    }
    cin>>ui;
    while(ui != 0){
     if(swords[ui-1].money <= money){



        if(swords[ui-1].owned == 1){
            cout<<"You already have this sword!"<<endl;
        }
    else{
        money -= swords[ui-1].money;
        swords[ui-1].owned = 1;
        sword_mp = sword_mp + swords[ui-1].boost;
        spt = (1 + sword_mp) * pet_mp;
        cout<<"You purchased "<<swords[ui-1].name<<"! Your new strength per train is "<<spt<<". Your money is: "<<money<<endl;
    }
    }



    else{

        cout<<"You don't have enough money. Your money: "<<money<<endl;

    }
    cin>>ui;
        
    }
}



void static credits(){

    cout<<"All of this code is written by Efe Kapukulak for practising purposes. Enter 0 to go back.";
    cin>>ui;
    if(ui==0){
        return;
    }
}



