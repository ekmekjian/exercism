#include <string.h>
#include <stdio.h>
#include <ctype.h>
char * acronymGen(const char str[])
{
    if(str == NULL)
    {
        return false;
    }
    //initialze array to pointer
    const char * seperation;
    char * acronym;
    //use strtok to  string by space and hyphen
    seperation = strtok(str," -");
    //go through each word find the first letter then fill
    while(seperation != NULL)
    {
        //Not sure if this is legal use of char pointer***
        if(isupper(seperation[0]))
            strcat(acronym,seperation[0]);
        else
            strcat(acronym,toupper(seperation[0]));
        seperation = strtok(NULL," -");
    }
    //to acronym for return
    return acronym;
}

int main()
{
    char * result;
    result = acronymGen(NULL);
    return 0;
}
