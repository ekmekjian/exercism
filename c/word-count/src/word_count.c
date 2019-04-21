#include <word_count.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int word_count(const char *input_text, word_count_word_t * words)
{
    int totalCount = 0;
    char wordList[MAX_WORDS];
    char * token;
    //Seperate each word in input_text to an array and words[index].text
    token = strtok(input_text," ");
    while(token !=NULL)
    {
        if(strlen(token)>MAX_WORD_LENGTH)
        {
            return -1;
        }
         //loop through each word in words comparing each to words in the array
        //count each iteration of the words
        wordList[totalCount]=token;
        token = strtok(NULL," ");
        totalCount++;
    }
    if(totalCount>MAX_WORDS)
    {
        return -2;
    }
      for(int i=0;i<totalCount;i++)
      {
          if(words[0].text==NULL)
          {
              words[0].text == wordList[i];
          }
          else
          {
                      
          }
      }
    return totalCount;
}



