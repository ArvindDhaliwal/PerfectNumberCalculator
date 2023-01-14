//Arvind Dhaliwal, January 14,2022, Assignment 1 Q5
//This code takes a integer and then return 1 if the integer is a perfect number and 0 if it is not

#include <stdio.h>
int sumdivisors(int a) //funtion to determine if the inputed integer is a perfect number (builds on funtion in question 4)
{
int sum=0;
int i=1;
int result=0;
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        sum+=i;
    }
        if(sum==a) //checks if integer is a perfect number
            result=1; //funtion will return 1 for a perfect number 
        else //if integer is not a perfect number
            result=0; //funtion will return 0 if integer is not a perfect number
    
return result; //return either 1 or 0
}


int main()
{
    int n; //variable declared to store integer
    printf("input a number:"); //asks user to input a integer
    scanf("%d",&n); //stores integer 
    printf("%d\n", sumdivisors(n)); //calls function sumdivisors() and prints out 1 if n is a perfect number and 0 of it is not
    
    return 0;

}
