#include "isogram.h"
#include <stdbool.h>
#include <string.h>
#include <stdio.h>

bool IsIsogram(char *str)
{
    bool isIso = true;
//loop through each letter to find dupilcate
  	char * i; 
    for(i=str;*i;i++)
    {
		char *j;
	  for(j = str;*j;j++)
         {
            if(i==j)
            {continue;}
            else if(*i==*j)
            {;return false;}
         }
      }
      //return true if no duplicates were found
      if(isIso == true) {return true;}
      //return false if nothing found
      else {return false;}
 }
