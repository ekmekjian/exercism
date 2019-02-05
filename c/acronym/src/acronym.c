#include <string.h>
#include <stdio.h>
char * acronymGen(char str[])
{
    int len = strlen(str);
    
   for(int i=0;i<len;i++)
   {
    printf("%c",str[i]);   
   }
   printf("\n");
    
    return "PNG";
}

int main()
{
    char acron[50]= acronymGen("Portable Network Graphics");
    for(int i =0;strlen(acron);i++)
    {
        printf("%c",acron[i]);
    }
    printf("\n");
    return 0;
}