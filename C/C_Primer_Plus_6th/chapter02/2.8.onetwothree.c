#include <stdio.h>

void two(void)
{
    printf("two\n");
}

void one_three(void)
{
    printf("one\n");
}

int main(void)
{
    void one_three(void);
    void two(void);
    printf("starting now: \n");
    one_three();
    two();
    printf("three\n");
    printf("done.\n");
    return 0;
}
