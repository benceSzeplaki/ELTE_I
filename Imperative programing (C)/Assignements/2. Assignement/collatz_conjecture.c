#include <stdio.h>
int main()
{
	int first = 0, length = 1;
	printf("Give the first number of the sequence: ");
	scanf("%i", &first);
	printf("The sequence is the following: \n%i, ", first);
	while(first != 1)
	{
		if(first % 2 == 1)
		{
			first = first * 3 + 1;
			if (first != 1)
				{printf("%i, ", first);}
			else
				{printf("%i\n", first);}
			length++;
		}
		else if( first % 2 == 0)
		{
			first = first / 2;
			if (first != 1)
				{printf("%i, ", first);}
			else
				{printf("%i\n", first);}
			length++;	
		}
	}
	printf("The length of the sequence: ");
	printf("%i\n", length);
	return 0;
}
