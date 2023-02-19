#include <stdio.h>

void cubeByReference(int *nPtr);


int main(void){
	int number = 5;
	
	printf("The original value of number is %d", number);
	
	cubeByReference(&number);
	
	printf("\n The new value of number is %d\n", number);
}

void cubeByReference(int *nPtr){
	*nPtr = *nPtr * *nPtr * *nPtr;
}
