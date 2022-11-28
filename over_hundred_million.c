#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define OKU 10000000
#define MAN 10000

void run(unsigned int base){
    int i=0;
    unsigned long c=0;
    srand(base);
    while(1){
        i++;
        if(rand()%1000000==0)break;
    }
    c=(unsigned long)i*300;
    printf("%lu oku %lu man\n",c/OKU,c%OKU/MAN);
    return c;
}

int main(){
    int i=0;
    srand((unsigned)time(NULL));
    for(i=0;i<100;i++)run(rand());
    return 0;
}