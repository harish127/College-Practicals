#include<stdio.h>
#include<conio.h>
#define pi 3.14

void main()
{
clrscr();
float r, vol, sa;
printf("Enter radius of Sphere :");
scanf("%f",&r);
vol=(4/3)*pi*(r*r*r);
sa=(4*pi*(r*r));
printf("\nVolume : %f", vol);
printf("\nSurface Area : %f", sa);
getch();
}