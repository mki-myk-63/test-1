#include<stdio.h>

int main(void)
{
	int i;
	for (i = 1; i <= 100; i++) {
		/*3.5両方*/
		if (i % 3==0  && i % 5==0 ) {
			printf("FizzBuzz\n");
		}/*3だけ*/
		else if (i % 3==0) {
			printf("Fizz\n");
		}/*5だけ*/
		else if (i % 5==0) {
			printf("Buzz\n");
		}/*どちらでもない*/
		else printf("%d\n", i);
	}
		return 0;
	}