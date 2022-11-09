// Import statements 
#include<stdio.h>

// Function to run program 
void runProgram(){
	// Declare variables 
	char strings[100];
	int integer;

	// Read in type
	// %s string, %d int, %c char, %f float
	printf("Enter a string and integer: ");
	scanf("%s %d", strings, &integer);

	// Output user input values
	printf("\nYou entered: %s %d ", strings, integer);
}

int main(){
	runProgram();
	return 0;
}
