/* 20. WAP program to print below output using for loop
01 02 03 04 05 06 07 08 09 10
11 12 13 14 15 16 17 18 19 20
21 22 23 24 25 26 27 28 29 30
31 32 33 34 35 36 37 38 39 40
41 42 43 44 45 46 47 48 49 50
*/
#include <stdio.h>
int main() {
    int rows = 5,cols = 10,i,j;  

    for(i=1;i<=rows;i++) 
	{
        for(j=1;j<=cols;j++) 
		{
            int value=(i-1)*10+j;
            printf("%02d ", value); 
        }
        printf("\n");
    }

    return 0;
}

