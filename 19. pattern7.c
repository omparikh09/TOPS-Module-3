#include <stdio.h>

#define N 10 // Size of the matrix (10x10)

void printSpiral(int arr[N][N]) 
{
    int top = 0, bottom = N - 1;
    int left = 0, right = N - 1;
    int num = 1;

    while (top <= bottom && left <= right) 
	{
		int i;
        // Fill top row
        for (i = left; i <= right; i++) 
		{
            arr[top][i] = num++;
        }
        top++;

        // Fill right column
        for (i = top; i <= bottom; i++) 
		{
            arr[i][right] = num++;
        }
        right--;

        // Fill bottom row
        for (i = right; i >= left; i--) 
		{
            arr[bottom][i] = num++;
        }
        bottom--;

        // Fill left column
        for (i = bottom; i >= top; i--) 
		{
            arr[i][left] = num++;
        }
        left++;
    }
}

void printMatrix(int arr[N][N]) 
{
	int i,j;
    for (i = 0; i < N; i++) 
	{
        for (j = 0; j < N; j++) 
		{
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() 
{
    int arr[N][N] = {0};

    // Create the spiral matrix
    printSpiral(arr);

    // Print the spiral matrix
    printMatrix(arr);

    return 0;
}
