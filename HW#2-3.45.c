/*3.45

a) Write a program that reads a nonnegative integer and computes and prints its factorial.*/
#include <stdio.h>
 
int main()
 
{
    long factorial;                                                         
    long num;                                                                   
    long counter;   
                 
    factorial = 1;  
    num = 0;                                                                
    counter = num;          
 
    do {
        printf( "Enter a positive integer less than 13: " );        
        scanf( "%d",&num );                                                 
    }   while( num < 0 || num > 12 );                                     
    counter = num;
 
    while ( counter > 1 ) {                                                          
        factorial = factorial * counter;                                    
        counter = counter - 1;                                              
    }
 
    if( num >= 0 )
        printf( "\n%d! is %d\n\n", num , factorial);        
 
    return 0;                                                                   
}