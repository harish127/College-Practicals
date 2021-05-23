/* Write a C program to take the radius of a sphere as input and print the
volume and surface area of that sphere.
@Code By:- Harish Kumar
@Date:- 22/4/2021
*/

#include<stdio.h>
#include<conio.h>
#define pi 3.14 //macro defination

//main () Defination
void main()
{
clrscr(); //clearing the output screen
// Declearing Necessay variables 
float r, vol, sa;

//Asking for user Input
printf("Enter radius of Sphere :");
scanf("%f",&r);

//Calculation of Volume and Surface Area
vol=(4/3)*pi*(r*r*r);
sa=(4*pi*(r*r));

//Displaying the Required output
printf("\nVolume : %f", vol);
printf("\nSurface Area : %f", sa);

//Stop the output screen
printf("\nEnter any Key to Exit..");
getch();
}