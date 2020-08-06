#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
    int r,i,heads=0,tails=0;
    srand((unsigned int)time(NULL));
    printf("Tossing a coin...\n");
    for(i=1;i<4;i++){
        printf("Round %d: ",i);
        r=rand()%2;
        if(r){
            printf(" Heads\n");
            heads++;
        }
        else{
            printf(" Tails\n");
            tails++;
        }
    }
    printf("Heads: %d, Tails: %d\n",heads,tails);
    return 0;
}