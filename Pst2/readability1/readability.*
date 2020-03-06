// Include
#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
    string text = get_string("Text: ");
    int letters = 0, words = 0, sentences = 0;
    
    // if string is not zero, there is at least one word
    if (strlen(text) > 0)
    {
        words = 1;
    }

    for (int i = 0; i < strlen(text); i++)
    {   
        // Count number of alphabet letters
        if isalpha(text[i])
        {
            letters++;
        }
        
        // Count number of words
        if (isspace(text[i]) && !isspace(text[i + 1]))
        {
            words++;
        }
        
        // Count number of senteces
        if (text[i] == '!' || text[i] == '.' || text[i] == '?')
        {
            sentences++;
        }
    }
    
    // Calculate the index
    int index = round(0.0588 * (letters / (float) words * 100) - 0.296 * (sentences / (float) words * 100) - 15.8);

    if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else if (index >= 1)
    {
        printf("Grade %i\n", index);
    }
    else
    {
        printf("Before Grade 1\n");
    }
}