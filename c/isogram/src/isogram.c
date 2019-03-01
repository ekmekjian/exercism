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
//loop through each letter to find dupilcate
  	const char * i; 
    for(i=str;*i;i++)
    {
	//check if its an actual letter and makes sure it's
	//lower case
	if(!isalpha(*i))
	   {continue;}
	const char *j;
	  for(j = str;*j;j++)
         {
	    //check if loop is looking at the same character if
	    //if it is skip this loop
            if(i==j)
            {continue;}
            else if(isupper(*i))
	          {if(tolower(*i)==*j){
              return false;
            }}
            else if(*i==*j)
            {return false;}
         }
      }
      return true;
     
 }


 
