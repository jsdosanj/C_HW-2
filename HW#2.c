//
//  HW#2.c
//  
//
//  Created by Jasvant Dosanjh on 7/17/18.
//3.16, 3.23, 3.35, 3.45
#include <iostream>
using namespace std;
int main()
{
    double gallon;
    double average;
    double total = 0;
    double mile = 0;
    double milegallon;
    double counter=0;
    cout<<"enter gallons used in tank"<<endl;
    cin>>gallon;
    while(mile != -1)  //you need to campare mile, because if gallon is set != -1, the loop will never end
        {
        cout<<"Please enter distance in miles ( or -1 to quit) "<<endl;
        cin>>mile;
        if(mile != -1)  //for dont calculate it for miles == -1
        {
            milegallon = mile/gallon; //here was a little syntax error, you wrote gallons
            total += milegallon;
            counter++;  //here you have to increment the counter(to cout all entered miles and not the entered gallon)
            cout<<"Mile per gallon is:"<<milegallon<<endl;
        }
    }
    average = total / counter;
    cout<<"Overall average was"<<average<<endl;
    return 0;
}

