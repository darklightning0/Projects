
#include <iostream>

using namespace std;

int main(){

    int month_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day = 0;
    int month = 1;
    int year = 1900;

    int sundays = 0;
//day != 31 && month != 12 && year != 2000
    while(year < 2001){

        if(year % 4 == 0){

            month_days[2] = 29;

        }else{

            month_days[2] = 28;

        }

        day += 7;
        if(day > month_days[month]){

            day -= month_days[month];
            month++;
    
            if(month > 12){

                month = 1;
                year++;

            }

        }

        if(day == 1){

            sundays++;

        }

    }

    cout<<sundays;

}

