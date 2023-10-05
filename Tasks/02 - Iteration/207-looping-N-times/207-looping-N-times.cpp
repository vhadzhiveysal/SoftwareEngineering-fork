#include <stdio.h>

int main()
{
    //Counter variable
    int i;


    //For loop (pre-C99 standard)
    for (i = 0; i < 5; i++)
    {
        //Perform code tasks
        printf("i=%d\n", i);
    }

    // TASK A - count from 10 down to 0 in steps of -1
    puts("task a");
    for (i = 10; i >= 0; i--)
    {
        printf("i=%d\n", i);
    }
    // TASK B - count from 10 down to -10 in steps of -2
    puts("task b");
    for (i = 10; i >= -10; i -= 2)
    {
        printf("i=%d\n", i);
    }
    // TASK C - count from 10 to 200 in steps of 10
    puts("task c");
    for (i = 10; i <= 200; i += 10)
    {
        printf("i=%d\n", i);
    }
    // TASK D - count from -10 down to 20 in steps of 5
    puts("task d");
    for (i = -10; i <= 20; i += 5)
    {
        printf("i=%d\n", i);
    }
    // TASK E - can you predict the largest value of i that is displayed?
    puts("task e");
    for (i = 0; i < 12; i += 3)
    {
        //Perform code tasks
        printf("i=%d\n", i);
    }
    // prediction: i's largest displayed value is 9
}