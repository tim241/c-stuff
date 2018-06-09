#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool yes = true;

	for(int i = 0; i < 10; i++)
	{
		yes ? printf("yes is true\n") : printf("yes if false\n");
		yes = !yes;
	}

	return 0;
}