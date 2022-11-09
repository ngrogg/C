// Import statements 
#include<stdio.h>

// Function
void helloWorld(int n){
	printf("Hello World : %d\n", n);
}

int main(){
	int n = 1;
	printf("For loop\n");
	for (int i=0; i<5; i++){
		helloWorld(i);
	}
	printf("While loop\n");
	while(n<6) {
		helloWorld(n);
		n++;
	}
	return 0;
}
