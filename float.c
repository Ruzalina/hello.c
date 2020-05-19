#include<cs50.h>
#include<stdio.h>
int main(void)
{
    float price=get_float("What is the price?\n");
    int total=price*1.0625;
    printf("Your total is %f.\n");
}


