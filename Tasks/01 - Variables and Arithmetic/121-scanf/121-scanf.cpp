#include <stdio.h>

int main()
{
    //Create a variable x
    int x = 0;
    int y = 0;
    //Prompt user
    printf("Enter your age\n");

    //Read keyboard response - look for an integer
    int found = scanf_s("%d %d", &x, &y);

    //Display how many items were matched
    printf("Matched %d items\n", found);

    //Display what was typed in
    printf("x = %d\ny = %d\n", x, y);
    
    float total = x + y;
    float average = total / 2;

    printf("average between both numbers: %.1f\n", average);
}


