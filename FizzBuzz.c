#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){

	int n = 1;

	while(n < 101){
		if(n % 3 == 0){
			if(n % 5 == 0){
				printf("FizzBuzz\n");
			}
			if(n % 5 != 0){
				printf("Fizz\n");
			}
		}
		if(n % 5 == 0 && n % 3 != 0){
			printf("Buzz\n");
		}
		if(n % 3 != 0 && n % 5 != 0){
			printf("%d\n", n);
		}
			
		n++;
	}
}
