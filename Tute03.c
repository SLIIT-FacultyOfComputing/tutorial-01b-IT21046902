/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include<iostream>
using namespace std;
int main(void)
{
 double salary,netSalary;
 int etype,otHrs,otRate;//variable declaration
 
 cout<<"Enter Employee Type : ";//user inputs 
 cin>>etype;
 
 cout<<"Enter Salary : ";//user inputs
 cin>>salary;
 
 cout<<"Enter otHrs : ";//user inputs
 cin>>otHrs;
 
 switch(etype)//switch statement
 {
 case 1 : 
 otRate = 1000;
 break;
 
 case 2 : 
 otRate = 1500;
 break;
 
 default :
 otRate = 1700;
 break;
 
 }
 
 //calculating
 netSalary = salary + otHrs * otRate;
 cout<<"Net Salary is "<<netSalary<<endl;//display netsalary
 
 return 0;
}

