/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Jack Nelson
*/

#include <stdio.h>
#include <math.h>

void function()
{
    double a, b, c;
    printf("Enter a in the quadratic equation: ");
    scanf("%lf",&a);
    printf("Enter b in the quadratic equation: ");
    scanf("%lf",&b);
    printf("Enter c in the quadratic equation: ");
    scanf("%lf",&c);
    double SquareRoot;
    double root1,root2;
    if((b*b-(4*a*c))<0)
        printf("No real roots, b^2-4ac is less than zero");
    else
    {
        SquareRoot=sqrt(b*b-(4*a*c));
        root1=((-b+SquareRoot)/(2*a));
        root2=((-b-SquareRoot)/(2*a));
        printf("The roots are %lf and %lf",root1,root2);
    }
}
