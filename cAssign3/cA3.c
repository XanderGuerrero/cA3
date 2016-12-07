/*
Assignment #3
The following program has comments inserted into it asking you to do certain things.
Put your answers as comments after the questions.  Once you are done, hand in a
PRINTOUT of this file containing the contents as stated below (INCLUDING THE QUESTIONS
AS STATED) and your answers (BELOW THE QUESTIONS). Hand the printout in during class
on the due date.
Use a highlighter on the printout to highlight your answers.
Also, put your final version of this file in the appropriate drop box.
You should not put any other files in the drop box besides this one (i.e. no executable).
The assignment is due at the end of class for your section on the due date, not at 11:59 p.m.!
 */


 // Q1: Insert an appropriate file header comment here. (NOTE: This is NOT a
 //     comment about stdio.h)

 // 
 // Filename:	 cAssign3-1.c
 // Project:		 cA3.c
 // By:			 Alex Guerrero
 // Date:		 Friday October 26, 2012
 // Description:	 This program displays the values in the array.  It then doubles the values and displays them.  
 //				 It then prints the new value of element 3 in the array.  
 //			     The program then takes element 3 with its new value and doubles it again and prints it to the screen. 
 //				 Element 3 is then returned to it's previous total and printed to the screen.

#include <stdio.h>

// Q2: What does the next line do?
// The line #define size 5 allows the programmer to create a name (size) for a constant value of (5) and have that 
// name associated with that constants value anytime it is used.
#define SIZE 5




// Q3: What are the next two lines called?
void modifyArray(int b[], int size);
void modifyElement(int e);
void reallyModifyElement(int *a);

// The lines following question 3 are fucntions called prototypes to inform the complier to watch out for these names
// that come with a set of instructions to carry out when it comes across them in the program..


int main(void)
{
	// Q4: The next questions apply to the declaration of the variable a:
	//	4a: What kind of variable is a?
	//	4b: What does SIZE do in the declaration?
	//	4c: Describe what the numbers between the curly braces do.
	int a[SIZE] = { 0, 1, 2, 3, 4 };
	int i = 0;

	// 4a.  a is an interger variable name.
	// 4b.  SIZE in square brackets signifies an array.
	// 4c.  The numbers in curly braces indicate the values in the array.

	printf("The values of the original array are: ");

	while (i < SIZE)
	{
		printf("%d ", a[i++]);
	}
	printf("\n");

	// Q5: What is the benefit of SIZE being passed as a parameter?
	// The benefit of passing size as a paramater is size determines the number of values being modified  
	modifyArray(a, SIZE);



	// Q6: What would happen to the program if we left out the i = 0 line?
	// When i = 0; is left out, the loop doesn't take place so the numbers are not doubled and not displayed
	i = 0;
	printf("New values are: ");
	while (i < SIZE)
	{
		printf("%d ", a[i++]);
	}
	printf("\n");

	// Q7: What would happen if we left out the [3] in the line below?  Why?
	//  A complier bug occurs because the complier prints out the value of a[0] which is the address
	//  number stored in memory
	printf("The value of element 3 is %d\n", a[3]);

	// Q8: What data type is a[3]?
	// The data type in element 3 is an int
	modifyElement(a[3]);

	printf("The new value of element 3 is %d\n", a[3]);

	reallyModifyElement(&a[1]); // Q12. Function that takes value stored at address a[1] and multiplies it by 2


	return 0;
}



// Q9: Add an appropriate function comment here.  Pay particular attention
//		to the parameters.

//
//Function: modifyArray()
//Description: Doubles the value of the element in the array
//Parameters: int b, int size
//Return Values: mulitplies the values stored in the array by 2
//
void modifyArray(int b[], int size)
{
	int j = 0;

	// Q10: Write a comment stating what the while loop is doing.
	//  This loops 5 times, multiplying the values in the array by 2
	while (j < size)
	{
		b[j] = b[j] * 2;
		j++;
	}
}

void modifyElement(int e)
{
	e = e * 2;
	printf("Doubled to %d\n", e);
}




// Q11: Write a function called reallyModifyElement that takes a pointer
//		to an int as a parameter and multiplies by two the contents that 
//		are pointed	to by the pointer.  Comment it with a function comment
//		and inline comments as appropriate.

 //
//Function: reallyModifyArray()
//Description: multiples the value pointed to by the pointer by 2
//Parameters: int *a
//Return Values: returns an int doubled
//

void reallyModifyElement(int *a)
{
	*a = *a * 2; //  Gets the value referenced at address "a" and multiplies that value by 2 and assigns it back to address "a"
}



// Q12: Write a line of code that would call reallyModifyElement in order
//		to change the value of a[1].  Put it in main() just before the
//      return statement.  Do not put it here.
