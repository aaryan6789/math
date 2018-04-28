#include <stdlib.h>
#include <stdio.h>

/*
 * Power Function
 * pow(x, y) -> x^y
 */

int power(float x, float y){
	float result = x;
	int sign = 0;

	// x is a Positive number greater than 1.
	// x is 0
	// x is negative number
	// y is positive number
	// y is negative number

	if(y == 0)
		result = 1;

	if(x == 0){
		result = 0;
	}

	if(x == 1){
		result = 1;
	}

	if(y<0){
		y = -y;
		sign = 1;
	}

	if (y>0){
		result = x;
		for(int i = 1; i<y; i++){
			result = result*x;
		}
	}

	if(sign == 1){
		printf("Power(%f, %f) = %f\n", x, -y, 1/result);
		return 1/result;
	}
	else{
		printf("Power(%f, %f) = %f\n", x, y, result);
		return result;

	}
}

int main(){

	power(0.3, 3);
	power(3, -3);
	power(2, 2);
	power(0, 4);
	power(1, 5);
	power(5, 0);
	power(-2, 3);

}
