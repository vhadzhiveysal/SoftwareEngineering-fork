#include <stdio.h>

int main()
{
    int i = 10;

    puts("Start while loop");

    while (i > 0)
    {
        printf("i = %d\n", i);
        i -= 2;        // same as i = i + 1 but more concise;
    }

    printf("Exiting with i=%d\n", i);
}

/*
* loop repeats 5 times
* final value of i is 5
* upon changing i to 6, the loop doesnt iterate once because its not a do-while loop
* i counts down to 0 in steps of 2, breaks out of loop once it reaches 0
*/
