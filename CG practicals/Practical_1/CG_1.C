/*

Write a program to draw the line using DDA Algorithm.

Coded By : Harish Kumar
Date : 04/06/2021

*/
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#define ROUND(a) ((int) (a+0.5)) //used to rounding the values

//Function for DDA Algorithm
void dda(int a, int b, int c, int d){
//declaration of required variable
int dx=c-a, dy=d-b, steps, k;
float xInc , yInc, x=a, y=b;

//calculation of number of steps
if(abs(dx) > abs(dy))
steps = abs(dx);

else
steps= abs(y);

//calculation of x and y increment
xInc = dx/(float) steps;
yInc = dy/(float) steps;

//displaying the first point
putpixel(ROUND(x), ROUND(y),14);

//displaying rest points through increment
for(k=0;k<steps;k++){
x+=xInc;
y+=yInc;

putpixel(ROUND(x), ROUND(y),14);
	}
}

//main function
void main(){

//initilizing graphic device variables
int gdriver = DETECT, gmode;

//Variables for storing coordinates(x1, y1) and (x2, y2)
int x1=0, y1=0, x2=0, y2=0;

//Clearing the output Screen
clrscr();

//Asking user for both end points
printf("Enter value of (x1,y1) : ");
scanf("%d %d",&x1, &y1);
printf("Enter value of (x2,y2) : ");
scanf("%d %d",&x2, &y2);

//initilizing graphics
initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");

//calling our dda function
dda(x1,y1,x2,y2);

//For holding Output screen
getch();

//closing graphics
closegraph();
}
