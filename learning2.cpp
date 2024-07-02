//
//  main.cpp
//  L2 Coding Lessons
//
//  Created by Efe Kapukulak on 17.10.2023.
//

#include <iostream>
#include <fstream>

using namespace std;


void print(){
    
    cout<<"Hello World!"<<endl;
    
}

bool login(){
    
    string username = "aci";
    string password = "123456";
    string uusername;
    string upassword;
  
    
    while(username != uusername || password != upassword ){
        
        cout<<"Please enter username: "<<endl;
        cin>>uusername;
        cout<<"Please enter password: "<<endl;
        cin>>upassword;
        
    
    }
    
    cout<<"You've succesfully entered."<<endl;
    
    return true;
}

string decide_weather(int weather){
    
    if(weather > 30){
        return "Güneşli";
    }else if (weather < 0){
        return "Karlı";
    }else{
        return "Yağmurlu";
    }
    
}

void kayit(){
    
    string unamekayit, passwordkayit;
    string okulkayit, isimkayit, yaskayit;
    
    ifstream dataFile("l2codingsave.txt", ios::in);
    
    if(dataFile.good() && !dataFile.fail()) {
        
        dataFile >> unamekayit >> passwordkayit >> okulkayit >> isimkayit >> yaskayit;
        
    }
    
    dataFile.close();
    cout<<"kullanıcı adı: ";
    cin>>unamekayit;
    cout<<"şifre: ";
    cin>>passwordkayit;
    cout<<"Okul adı: ";
    cin>>okulkayit;
    cout<<"isim: ";
    cin>>isimkayit;
    cout<<"yas: ";
    cin>>yaskayit;
    
    ofstream outputFile("l2codingsave.txt", ios::out);
    
       outputFile << okulkayit << " " << passwordkayit << " " << okulkayit << " "<< isimkayit << " " << yaskayit << endl;

       outputFile.close();
    
}


class test{
    
public:
    
    void deneme(){
        
        cout<<"hello"<<endl;
        
    }
    
};

int main(){
    
    
    // cout<<"merhaba! \n";
    // cout<<"selam \n";
    
    /*
     int a; // 1
     float b; // 1.2...
     double c; // 2.8
     bool d; // true
     string e; // "yazı"
     char f; // 'u'
     */
    
    /*
     int n;
     cin>>n;
     cout<<n<<endl;
     
     if(n > 10){
     cout<<n<<" is bigger than 10 \n";
     }else{
     cout<<n<<" is lower than 10 \n";
     }
     
     }
     */
    
    /*
     int x = 1;
     while (x<=5) {
     cout<<x<<endl;
     x++;
     }
     
     while(true){
     
     cout<<1;
     break;
     
     }
     */
    
    /*
     for(int x = 0;x<=5;x++){
     
     cout<<x<<endl;
     
     }
     */
    /*
     string username = "aci";
     string password = "123456";
     string uusername;
     string upassword;
     
     
     while(username != uusername || password != upassword ){
     
     cout<<"Please enter username: "<<endl;
     cin>>uusername;
     cout<<"Please enter password: "<<endl;
     cin>>upassword;
     
     
     }
     
     cout<<"You've succesfully entered."<<endl;
     
     */
    /*
     for(int x = 0;x<=5;x++){
     
     if(x == 3){
     
     continue;
     //break;
     
     }
     
     cout<<x<<endl;
     
     }
     */
    /*
     print();
     
     
     for(int i = 0;i < 4; i++){
     
     print();
     
     }
     
     int weather;
     cout<<"Hava kaç derece?";
     cin>>weather;
     cout<<decide_weather(weather);
     */
    /*
    string students[5] = {"efe", "ahmet", "mehmet", "mahmut", "ayşe"};
    
    string fruits[3][2] = {
        {"apple", "10Tl"},
        {"banana", "15Tl"},
        {"strawberry", "20Tl"}
    };
    
    for (int i = 0; i<3; i++) {
        for(int t = 0; t<2;t++){
            if(fruits[i][1] == "20Tl"){
                cout<<fruits[i][t]<<endl;
            }
        }
    }
    */

    /*

  // Create and open a text file
  ofstream MyFile("filename.txt");

  // Write to the file
  MyFile << "Files can be tricky, but it is fun enough!";

  // Close the file
  MyFile.close();

    */
    

    
    
    
    kayit();
    
    
    
    
    
    
    
    
    
    
}
