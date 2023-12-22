/*
Q.2 Write a Program to swap two variables using Pointers.
For example,
Input:
Enter the value of x: 5
Enter the value of y: 3

Output:
Before swapping:
x: 5
y: 3

After swapping:
x: 3
y: 5
*/

#include<stdio.h>

main(){
	int a,b,x,y;
	int *ptr,*ntr;
	
	printf("enter value A : ");
	scanf("%d",&a);
	printf("enter value B : ");
	scanf("%d",&b);
	
    ptr=&a;
    ntr=&b;
	
	printf("A = %d\n",*ntr);
	printf("B = %d",*ptr);
	
	
}
