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
    for(int i = 0; i<sizeof(str)/sizeof(char))
    {
        if(!isalpha(str[i]))
        continue;
        else if(isupper(str[i]))
        {
            strcat(acronym,str[i]);
        }
        else if(!isalpha(str[i-1]))
        {
            
        }
    }
    
    return acronym;
}

//int main()
//{
//    char * result;
//    result = acronymGen(NULL);
//    return 0;
//}
