#include <stdio.h>

int main(void)
{
	long num = 612852475143;
	long factor = 2;
	long largest = 0;
    
	while (num > 1)
	{
		if (num % factor == 0)
		{
			num /= factor;
			largest = factor;
		} 
		else
		{
			factor++;
		}
	}
	printf("%ld\n", largest); 
	return 0;
}
