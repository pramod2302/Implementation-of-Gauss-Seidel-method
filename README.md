# Implementation-of-Gauss-Seidel-method

Gauss Seidel method is a mathematical technique to solve for simultaneous equations. 
In this code, a system of equations of the 4th order 

[a1 * x^4 + a2 * x^3 + a3 * x^2 + a4 * x + a5 = a6] is solved. 

* Input consideration:

Rocket simulator data provided by Dr. Tyler Simon (Adjunct-Professor, UMBC CSEE dept.)
Using the data in rocket.txt I have constructed a 4th order relation between time and acceleration.

I have considered time and acceleration points at t = {0.2,0.3,0.7,1.8,1.9} to solve for the coefficients {a1, a2, a3, a4, a5}

Here the a6 values are the acceleration values for the corresponding time value.
The input matrix shown below is autogenerated by the code. The initial time and acceleration values are hard coded.

*** Note ***

The code might fail to produce correct results if the input doesnot follow the dominant matrix property.

********************************************************************************
*** Input for the code ***

0.001600 | 0.008000 | 0.040000 | 0.200000 | 1.000000 | 246.7

0.008100 | 0.027000 | 0.090000 | 0.300000 | 1.000000 | 88.159

0.240100 | 0.343000 | 0.490000 | 0.700000 | 1.000000 | 60.60

10.497599 | 5.831999 | 3.240000 | 1.800000 | 1.000000 | 38.05

13.032100 | 6.859000 | 3.610000 | 1.900000 | 1.000000 | -69.34

1st column is t^4

2nd column is t^3

3rd column is t^2

4th column is t

5th column is 1

6th column is the acceleration value

************************************************************************************

*** How to run the code ***

compile the code using. "cc gs.c"

execute the code using "./a.out"
