#include <stdio.h>

char* menupoints()
{
	char* menu = "\n------------------------------------------------------------------------------------------------------------------------------------------------------------\n Menupoints:\n            0 - Exit from program\n            1 - Draw a pyramid\n------------------------------------------------------------------------------------------------------------------------------------------------------------\nEnter menupoint number: ";
	return menu;
}

int main()
{
	int x;
	int menuPointSelected = 1;
	printf("\nWelcome to CS50 Mario!\n");
	do
	{
		printf("%s",menupoints());
		scanf("%i", &menuPointSelected);
		if(menuPointSelected == 1)
		{
			printf("Give the height of the pyramid: ");
			scanf("%i", &x);
			printf("\n");
			for (int y = 0; y < x; y++)
			{	
				for(int z = 0; z < x; z++)
				{
					if(y + z < x - 1)
					{
						printf(" ");
					}	
					else
					{
						printf("⎕");
					}
				}
				printf("  ");
				for(int z = 0; z <= y; z++)
				{
					printf("⎕");
				}
				printf("\n");
			}
		}
		else if(menuPointSelected != 1 && menuPointSelected != 0)
		{
			printf("\n !!! Invalid menupoint given !!! \n");
		}
	}while(menuPointSelected != 0);
	printf("\nGood Bye! :D\n\n");
	return 0;
}