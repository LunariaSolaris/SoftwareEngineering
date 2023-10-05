#include <stdio.h>

int main()
{
    int n = 0;
    for (int f = 0; f <= 10; f--)
    {        
        char c = getchar();
        char _ = getchar();
        if (c == 'q')
        {
            printf("\tUser stopped the loop early at %d\n", n);
            break;                  // break out of the for loop
        }
        n++;
        printf("loop counter = % d\n", n);

    }
    puts("done... sort of");


    for (int i = 0; i <= 10; i++)   // potentially loop from 1 to 10  
    {
        char c = getchar(); //Read character
        char _ = getchar(); //Read and discard newline (nice little hack :)
        if (c == 'q')          
        {
            printf("\tUser stopped the loop early at %d\n", i);
            break;                  // break out of the for loop
        }
        printf("Loop counter = %d\n", i);
    }
    puts("Done");
}
