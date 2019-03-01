#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
char * abbreviate(const char str[])
{
    if(str == NULL)
    {
        return "Invalid Entry";
    }
    //initialze array to pointer
    char * acronym;
    char * i;
    char * token;
    char * temp=(char *)malloc(strlen(str)+1);
    strcpy(temp,str);
    token = strtok(temp," -");
    while(token !=NULL)
    {
       i = *token; 
       if(isupper(*i))
         {
          acronym += *i;
         }
        token = strtok(NULL," -");
    }
   
    
    return acronym;
}

int main()
{
    char * result;
    result = abbreviate("Hello World");
    printf("%c",*result);
    return 0;
}
