#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i=0;
    srand((unsigned)time(NULL));
    while(1){
        i++;
        if(rand()%20000000==0)break;
    }
    printf("%lu\n",((unsigned long)i*300)/10000000);
}