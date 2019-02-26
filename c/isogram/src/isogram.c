#include "isogram.h"
#include <stdbool.h>
#include <string.h>
#include <stdio.h>

bool is_isogram(const char str[])
{
  if(str == NULL)
  {
    return false;
  }
    bool isIso = true;
//loop through each letter to find dupilcate
  	const char * i; 
    for(i=str;*i;i++)
    {
		const char *j;
	  for(j = str;*j;j++)
         {
            if(i==j)
            {continue;}
            else if(*i==*j)
            {return false;}
         }
      }
      //return true if no duplicates were found
      if(isIso == true) {return true;}
      //return false if nothing found
      else {return false;}
 }


 int main(){
   bool truth = is_isogram(NULL);
   printf("%d",truth);
 }