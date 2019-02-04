//3.23 Write a pseudocode program and then a program that inputs a series of 
//10 non-negative numbers and determines and prints the largest of the numbers. 

#include<stdio.h>

int main()
{
    float enter_num,proc=0;

    for(;;)
    {
       printf("Enter the number:");
       scanf("%f",&enter_num);


       if(enter_num == 0)
       {
           break;
       }

       if(enter_num < 0)
       {
           proc>enter_num;
           proc=enter_num;
       }

       if(proc < enter_num)
       {
           proc = enter_num;
       }

    }

    printf("Largest number from the above is:%.1f",proc);
    return 0;
}