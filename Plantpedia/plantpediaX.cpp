#include <iostream>
#include "pp_declaration.hpp"

using namespace std;

int main(){



while(ui != 999){

mainmenu();

switch(ui){

    case 0://Library

        library();
        break;   

    case 1://What Can I Plant

        wcip();
        break;   

    case 2://Credits

        credits();
        break;   

    default:

        cout<<"Please enter a valid number."<<endl;
             
}
        

}



}






