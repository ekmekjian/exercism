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
    for(int i = 0; i<sizeof(str)/sizeof(char);i++)
    {
        //if its the first letter capitalize and add
        //if its after a hyphen capitalize and add
        //
        if(!isalpha(str[i]))
        continue;
        else if(isupper(str[i]))
        {
            strcat(acronym,str[i]);
        }
        else if(!isalpha(str[i-1]))
        {
            strcat(acronym,toupper(str[i]));
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
