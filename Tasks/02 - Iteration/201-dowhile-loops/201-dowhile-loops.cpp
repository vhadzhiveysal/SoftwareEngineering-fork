#include <stdio.h>

int main()
{
    int i = 5;

    printf("Start while loop\n");

    do
    {
        printf("i = %d\n", i);
        i = i - 1;              // Alternatively, write i++;
    } while (i >= 0);            //Repeat if condition is met

    printf("Finished: i = %d\n", i);
}


/*
* tasks 1-6
4. loop repeats 5 times
5. final value of i is 5
6. when inital value of i is 6, the do while loop iterates once, i's new value becomes 7, then it breaks out of the loop
* challenge
* modified the code to so it outputs that
*/