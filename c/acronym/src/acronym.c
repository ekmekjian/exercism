#include <string.h>
#include <stdio.h>
#include <ctype.h>
char * acronymGen(const char str[])
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
       i = token; 
       if(isupper(*i))
         {
          strcat(acronym,*i)
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
