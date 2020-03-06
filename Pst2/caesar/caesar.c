// include
#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

bool isthekeyvalid(int argc, string argv);

int main(int argc, string argv[])
{

    if (!isthekeyvalid(argc, argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int key = atoi(argv[1]);

    string plaintext = get_string("plaintext: ");

    printf("ciphertext: ");
    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (isupper(plaintext[i]))
        {
            printf("%c", ((plaintext[i]) - 65 + key) % 26 + 65);
        }
        else if (islower(plaintext[i]))
        {
            printf("%c", ((plaintext[i]) - 97 + key) % 26 + 97);
        }
        else
        {
            printf("%c", plaintext[i]);
        }

        
    }
    printf("\n");
}


bool isthekeyvalid(int argc, string argv)
{
    if (argc != 2)
    {
        return false;
    }


    for (int i = 0; i < strlen(argv); i++)
    {
        if (!isdigit(argv[i]))
        {
            return false;
        }
    }

    return true;
}