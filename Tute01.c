/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

#include<iostream>
int main(void)
{
 float cm,inches; //variable declaration
 
 std::cout<<" Enter a length in cm : "; // user input 
 std::cin>>cm;
 
 //calculation 
 
 inches = cm / 2.54;
 
 std::cout<<"Length is inches "<<inches<<std::endl; 
 return 0;
}

