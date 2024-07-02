#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
int main(){

    int a=0;
    while(a==0){
    
    struct tm* ptr;
    time_t t;
    t = time(NULL);
    ptr = localtime(&t);
    printf("%s", asctime(ptr));
        
        usleep(1000000);
        system("clear");
    }
  
    
    return 0;
}

