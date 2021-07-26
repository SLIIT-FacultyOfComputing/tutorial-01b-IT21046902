/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include<iostream>
using namespace std;
int main()
{
 int no;
 long fac;//variable decleration 
 
 cout<<"enter a number : ";//input values
 cin>>no;
 
 fac = 1;
 for(int r=no;r>=1;r--)
 {
 fac = fac * r;
 }
 
 cout<<"factorial of "<<no<<" is "<<fac<<endl;//display 
 
 return 0;
}