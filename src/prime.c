#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool isPrime;
 	for(int i = 2; i <= 50; i++)
 	{
 		isPrime = true;
 		for(int p = 2; p < i; p++)
 		{
 			if(i % p == 0)
 				isPrime = false;
 		}
 		if(isPrime)
 			printf("%i ", i);
 	}
 	printf("\n");
	return 0;
}