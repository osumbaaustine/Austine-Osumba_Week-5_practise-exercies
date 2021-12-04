#include <stdio.h>
#include <stdlib.h>

int main(){

	int num1, num2, result;


	/*Prompting the user to enter the numbers*/
	printf("\nEnter the two numbers: ");
	scanf("%d %d", &num1, &num2);

	/* I passed the value of num1 and num2 as parameter to function add.
	    The value returned is stored in the variable result
	 */

	result = add(&num1, &num2);

	printf("\nAddition of %d and %d is %d", num1, num2, result);

}

/*Defining the function add()*/
int add(int *no1, int *no2)
{
	int res;
	res = *no1 + *no2;
	return res;
}