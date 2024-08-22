#include <stdio.h>
#include <ctype.h>

void CountryName(char name[]) 
{
    int i = 0;
    if (isalpha(name[i])) 
	{
        printf("%c", toupper(name[i]));
    }

    // Traverse through the string
    while (name[i] != '\0') 
	{
        // If a space is found, print the next character in uppercase
        if (name[i] == ' ' && isalpha(name[i + 1])) 
		{
            printf("%c", toupper(name[i + 1]));
        }
        i++;
    }
    printf("\n");
}

int main() 
{
    char countryName[100];

    printf("Enter a country name: ");
    // Read the input including spaces
    fgets(countryName, sizeof(countryName), stdin);

    printf("Abbreviation: ");
    CountryName(countryName);

    return 0;
}
