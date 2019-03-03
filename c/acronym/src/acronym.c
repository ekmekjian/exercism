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
    char * token;
    char * temp=(char *)malloc(strlen(str)+1);
    char holder = ' ';
    strcpy(temp,str);
    token = strtok(temp," -");
    while(token !=NULL)
    {
        holder = token[0];
       if(isupper(holder))
         {
          strcat(acronym,(char*)holder);
         }
        else if(isalpha(holder))
        {
            strcat(acronym,(char*)toupper(holder));
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
