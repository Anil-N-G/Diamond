/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   daimond.c
 * Author: ADMIN
 *
 * Created on December 10, 2020, 4:54 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
// C program to print 
// diamond shape with 
// 2n rows 


// Prints diamond 
// pattern with 2n rows 
void printDiamond(int n) 
{ 
	int space = n - 1; 

	// run loop (parent loop) 
	// till number of rows 
	for (int i = 0; i < n; i++) 
	{ 
		// loop for initially space, 
		// before star printing 
		for (int j = 0;j < space; j++) 
			printf(" "); 

		// Print i+1 stars 
		for (int j = 0;j <= i; j++) 
			printf("* "); 

		printf("\n"); 
		space--; 
	} 

	// Repeat again in 
	// reverse order 
	space = 0; 

	// run loop (parent loop) 
	// till number of rows 
	for (int i = n; i > 0; i--) 
	{ 
		// loop for initially space, 
		// before star printing 
		for (int j = 0; j < space; j++) 
			printf(" "); 

		// Print i stars 
		for (int j = 0;j < i;j++) 
			printf("* "); 

		printf("\n"); 
		space++; 
	} 
} 

// Driver code 
int main() 
{ 
	printDiamond(10); 
	return 0; 
} 



