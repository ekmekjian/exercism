#include <string.h>
#include <stdio.h>
#include <ctype.h>
char * acronymGen(char str[])
{
    if(str == NULL)
    {
        return "Invalid Entry";
    }
    //initialze array to pointer
    char * acronym;
    char * i
    token = strtok(str," -");
    while(token !=NULL)
    {
        for(i=token;*i;i++)
        {
            if(isalpha(*i))
               {
               }
        }
     
        token - strtok(NULL," -");
    }
   
    
    return acronym;
}

//int main()
//{
//    char * result;
//    result = acronymGen(NULL);
//    return 0;
//}
