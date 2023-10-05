#include <stdio.h>

int main()
{
    //Counter variable
    int i;


    //For loop (pre-C99 standard)
    puts("pt 1 benchmark");
    for (i = 0; i < 5; i++)
    {
        //Perform code tasks
        printf("i=%d\n", i);
    }

    // TASK A - count from 10 down to 0 in steps of -1
    puts("pt 2 count from 10 down to 0 in steps of -1");
    for (i = 10; i >= 0; i--)
    {
        //Perform code tasks
        printf("i=%d\n", i);
    }
    // TASK B - count from 10 down to -10 in steps of -2
    puts("pt 3 count from 10 down to -10 in steps of -2");
    for (i = 10; i >= -10; i = i - 2)
    {
        //Perform code tasks
        printf("i=%d\n", i);
    }
    // TASK C - count from 10 to 200 in steps of 10
    puts("pt 4 count from 10 to 200 in steps of 10");
    for (i = 10; i <= 200; i = i + 10)
    {
        //Perform code tasks
        printf("i=%d\n", i);
    }
    // TASK D - count from -10 down to 20 in steps of 5
    puts("pt 5 count from -10 down to 20 in steps of 5");
    for (i = -10; i <= 20; i = i + 5)
    {
        //Perform code tasks
        printf("i=%d\n", i);
    }
    // TASK E - can you predict the largest value of i that is displayed?
    puts("pt 6 can you predict the largest value of i that is displayed? (its 9)");
    for (i = 0; i < 12; i += 3)
    {
        //Perform code tasks
        printf("i=%d\n", i);
    }
}