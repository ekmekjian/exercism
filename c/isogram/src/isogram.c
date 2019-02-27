#include "isogram.h"
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

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
	//check if its an actual letter and makes sure it's
	//lower case
	if(!isalpha(*i)
	   {continue;}
	if(isupper(*i)
	   {tolower(*i);}
	const char *j;
	  for(j = str;*j;j++)
         {
	    //check if loop is looking at the same character if
	    //if it is skip this loop
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
