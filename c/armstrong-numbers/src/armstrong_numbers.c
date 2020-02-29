#include "armstrong_numbers.h"
#include<stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int is_armstrong_number(int candidate){
    int armstrong=0;
    char * split = malloc(sizeof(char*)*15);
    sprintf(split,"%d",candidate);
    char * i;
    int math[strlen(split)];
    int count;
    for(i=split;*i;i++)
    {
        math[count]=pow(((int)&i),strlen(split));

    }
    return armstrong;
}

int main(){
    printf("%d",is_armstrong_number(694));
    return 0;
}