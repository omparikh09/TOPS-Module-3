#include <stdio.h>

int find_length(char *input) 
{
    int length = 0;
    while (input[length] != '\0') 
	{
        length++;
    }
    return length;
}

int main() 
{
    char myString[] = "Hello world!";
    int length = find_length(myString);
    printf("Length of the string: %d\n", length);
    return 0;
}

