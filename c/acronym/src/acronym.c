#include <string.h>
#include <stdio.h>
char * acronymGen(char * str)
{
    char * acronym =NULL;
    int len = strlen(str)+1;
    char * i;
    char strin[len];
    for(i = str;*i;i++)
    {
        strcat(strin,i);
    }
   // printf("%c",strin[4]);
    return "PNG";
}

int main()
{
    char * acron;
     acron = acronymGen("Portable Network Graphics");
    printf("%c",*acron);
    return 0;
}