#include <word_count.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int word_count(const char *input_text, word_count_word_t * words)
{
    int totalCount = 0;
    char wordList[MAX_WORDS];
    //count each iteration of the words
   
    //initialze array to pointer
    char * token;
    //Seperate each word in input_text to an array and words[index].text
    token = strtok(input_text," ");
    while(token !=NULL)
    {
         //loop through each word in words comparing each to words in the array
        wordList[totalCount]=token;
      
        token = strtok(NULL," ");
        totalCount++;
    }
    return totalCount;
}
