#include "training_functions.cpp"


using namespace std;

int main(){
read_values();

while(ui != 999){

mainmenu();
switch(ui){

    case 0:

        training();
        break;

    case 1:

        convert_money();
        break;

    case 2:

        market();
        switch(ui){
            case 1:
                eggs();
                break;
            case 2:
                swordss();
                break;
        }
        break;

    case 3:

        credits();
        break;

    default:
    cout<<"Please enter a valid value.";
    break;

}



}



save_values();
 

}











