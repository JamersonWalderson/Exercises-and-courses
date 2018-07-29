#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float num1, num2, MEDIA;
	
	scanf ("%f%f",&num1, &num2);
	MEDIA = (num1 * 3.5 + num2 * 7.5) / 11;
	
	/*
	17.5
	53.25
	-------
	70.75
	*/
	printf ("MEDIA = %.5f\n", MEDIA);
	
	return 0;
}
