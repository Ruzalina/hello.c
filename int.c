#include<cs50.h>
#include<stdio.h>
int main(void)
{
    int age=get_int("What is your age?\n");
    int days=age*365;
    printf("You are %i days old.\n",days);
}

// make int
// ./int
