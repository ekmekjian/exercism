#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
char *dup (const char *s) {
    char *d = malloc (strlen (s) + 1);   // Space for length plus nul
    if (d == NULL) return NULL;          // No memory
    strcpy (d,s);                        // Copy the characters
    return d;                            // Return the new string
}

char * abbreviate(char * str)
{

    if(str == NULL || str[0]=='\0')
    {
        return NULL;
    }
    //initialze array to pointer
    char * acronym=(char *)malloc(strlen(str)+1);
    char * token;
    char * temp=acronym;
    char holder = ' ';
    token = strtok(dup(str)," -");
    while(token !=NULL)
    {
        holder = token[0];
       if(isupper(holder))
         {
          *temp++ = holder;
         }
        else if(isalpha(holder)&&islower(holder))
        {
            *temp++ = toupper(holder);
        }
        token = strtok(NULL," -");
    }
    temp="\0";
    
    return acronym;
}

