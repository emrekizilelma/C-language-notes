#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char buffer[50], filtered[50] = {0};
    int j = 0;

    printf("Enter the string: ");

    if(fgets(buffer, sizeof(buffer), stdin) != NULL)
    {
        for(int i = 0; i < strlen(buffer); i++)
        {
            if(isalpha(buffer[i]))
            {
                if(buffer[i]>= 'A' && buffer[i] <= 'Z')
                {
                    filtered[j++] = buffer[i] + 32;
                }

                else
                {
                    filtered[j++] = buffer[i];
                }
            }
        }

        printf("Filtered string: %s \n", filtered);
    }

    else
    {
        printf("ERROR reading input.");
    }

    return EXIT_SUCCESS;
}