#include "word_count.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void push(word_count_word_t * holder, const char * word)
{
    
       for(int i = 0; i<MAX_WORDS;i++)
       {
           if(holder==NULL){
            strcpy(holder->text,word);
            holder->count = 0;
            return;
           }
            
       }

}
char *dup (const char *s) {
    char *d = malloc (strlen (s) + 1);   // Space for length plus nul
    if (d == NULL) return NULL;          // No memory
    strcpy (d,s);                        // Copy the characters
    return d;                            // Return the new string
}

int word_count(const char *input_text, word_count_word_t * words)
{
    int totalCount = 0;
    int uniquWords = 0;
    char wordList[MAX_WORDS][MAX_WORD_LENGTH+1];
    char * token;
    //char *temp;
    //Seperate each word in input_text to an array and words[index].text
    token = strtok(dup(input_text)," ");
    while(token !=NULL)
    {
         if(totalCount>MAX_WORDS)
        {
            totalCount = -2;
            break;
        }
        if(strlen(token)>MAX_WORD_LENGTH)
        {
            totalCount = -1;
            break;
        }
         //loop through each word in words comparing each to words in the array
        //count each iteration of the words
        strcpy(wordList[totalCount],token); 
        token = strtok(NULL," ");
        totalCount++;
    }
    int arrSize = sizeof(wordList)/sizeof(wordList[0]);
    
     for(int i=0;i<arrSize;i++)
        {
          //if we reach the end of the list
           if(wordList[i]=='\0')
            {
                break;
            }
           //if wordList[i] contains any special characters thats not allowed
           //remove the special characters from the word and reinitialize it to the array     
          for(int j=0;j<MAX_WORDS;j++)
          {
              //compare the two lists 
              //if the word in wordList doesn't exit add to words and
              //increment uniqueWords
                if(words[0].text==NULL)
                {
                    strcpy(words[0].text,wordList[i]);
                }
                else if(strcmp(wordList[i],words[j].text)==0 )
                {
                    //if the world already exists in words then increment that words count
                    words[j].count +=1;
                }
                else
                {
                    push(words,input_text);
                    uniquWords +=1;
                }
                        
           }
       }
                      
          
      
    return uniquWords;
}

int main ()
{
    int count=0;
    word_count_word_t *test;
    count = word_count(test,"word");
    printf("%d",count);
}










