// longestsubstring.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	printf("Hello World!");
	char string1[] = "applesndudbananas!reryererd";
	char string2[] = "wapplessthdubananas";
	char *longer = string2, *shorter = string1;
	int chunksize, i, j, k;
	int equal = 0;	if (strlen(string1) > strlen(string2))
	{
		longer = string1;
		shorter = string2;
	}
	chunksize = strlen(shorter);
	printf("\n%s", longer);
	printf("\n%s", shorter);
	while (chunksize >= 2)
	{
		printf("\nCHUNKSIZE : %d", chunksize);
		for (i = 0; i < strlen(longer) - chunksize + 1; i++)
		{
			
			printf("\nA>");
			for (k = 0; k < chunksize; k++)
			{
				printf("%c", longer[i + k]);
			};
			printf("\n");
			for (j = 0; j < strlen(shorter) - chunksize + 1; j++)
			{

				printf("B>");
				for (k = 0; k < chunksize; k++)
				{
					printf("%c", shorter[j + k]);
				};
				printf("\n");
			}
		}
		chunksize--;
	}
}
