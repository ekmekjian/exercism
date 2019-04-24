#include <word_count.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void push(word_count_word_t * holder, char * word)
{
    
        while(holder !=NULL)
        {
            *holder->text = word;
            *holder->count = 0;
            holder++:
        }

}

int word_count(const char *input_text, word_count_word_t * words)
{
    int totalCount = 0;
    int uniquWords = 0;
    char wordList[MAX_WORDS][MAX_WORD_LENGTH+1];
    char * token;
    //Seperate each word in input_text to an array and words[index].text
    token = strtok(input_text," ");
    while(token !=NULL)
    {
         if(totalCount>MAX_WORDS)
        {
            totalCount = -2;
        }
        if(strlen(token)>MAX_WORD_LENGTH)
        {
            totalCount = -1;
        }
         //loop through each word in words comparing each to words in the array
        //count each iteration of the words
        wordList[totalCount]=token;
        token = strtok(NULL," ");
        totalCount++;
    }
    size_t arrSize = sizeof(wordList)/sizeof(wordList[0]);
    size_t arrSize2 = sizeof(words)/sizeof(words[0]);

    
              for(int i=0;i<arrSize;i++)
              {
                   if(wordList[i]==NULL)
                    {
                        break;
                    }
                //if wordList[i] contains any special characters thats not allowed
                //remove the special characters from the word and reinitialize it to the array
                  for(int j=0;j<arrSize2;j++)
                  {
                      //compare the two lists 
                      //if the word in wordList doesn't exit add to words and
                      //increment uniqueWords
                        if(words[0].text==NULL)
                        {
                            words[0].text == wordList[i];
                        }
                        else if(wordList[i] == words[j].text)
                        {
                            //if the world already exists in words then increment that words count
                            words[j].count +=1;
                        }
                  }
              }
                      
          
      
    return totalCount;
}








