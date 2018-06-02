#include <stdio.h>
// Import stdbool.h for bool
#include <stdbool.h>
// Import float.h for FLT_MAX and -FLT_MAX
#include <float.h>

bool floatLimit(float number)
{
	if(number >= FLT_MAX || number <= -FLT_MAX)
		return true;
	else
		return false;
}

int main(void)
{
	char operator;
	float value1, value2, output;

	printf("Enter a math problem: ");
	scanf("%f %c %f", &value1, &operator, &value2);

	if(floatLimit(value1) || floatLimit(value2)) {
		printf("Invalid value(s)\n");
		return 1;
	}

	switch(operator)
	{
		case '+':
			output = (value1 + value2);
			break;
		case '-':
			output = (value1 - value2);
			break;
		case '*':
			output = (value1 * value2);
			break;
		case '/':
			if(value2 == 0)
			{
				printf("cannot divide by 0\n");
				return 1;
			} else {
				output = (value1 / value2);
				break;
			}
		default:
			printf("Invalid operator\n");
			return 1;
	}
	
	if(floatLimit(output)){
		printf("Invalid output\n");
		return 1;
	} else {
		printf("The output is %.2f\n", output);
		return 0;
	}

}