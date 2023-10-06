#include <stdio.h>

int main()
{
    // Outer loop 
    for (int i = 1; i <= 12; i++)        // Outer loop executes twice
    {
        printf("(%d times table)\n", i);

        // Inner loop
        for (int j = 1; j <= 12; j++)    // Inner loop executes 5 times for each outer loop run so 10 time in total
        {
            printf("\t%d x %d = %d\n", i,j,i*j);
            
        }
    }
}
/*
task question : why cant i observe variable j during 2nd outer loop commencing at line 8
answer: because after the inner for loop is done, variable j's memory gets removed, it's undefined now
followup: it's also because variables inside loops are only visible inside the loop itself, when its outside it isn't visible
*/
