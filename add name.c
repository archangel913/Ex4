#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
    char name[25];
    int r,i,heads=0,tails=0;
    srand((unsigned int)time(NULL));
    printf("Who are you?\n");
    scanf("%s",name);
    printf("Hello,%s!\n",name);
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