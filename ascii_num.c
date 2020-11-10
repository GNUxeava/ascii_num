#include <stdio.h>
#include <ctype.h>
#include "ascii_num.h"

void print_num(char num)
{
	switch(num)
	{
		case '0': print_zero();
			break;

		case '1': print_one();
			break;

		case '2': print_two();
			break;

		case '3': print_three();
			break;
			
		case '4': print_four();
			break;

		case '5': print_five();
			break;

		case '6': print_six();
			break;

		case '7': print_seven();
			break;

		case '8': print_eight();
			break;

		case '9': print_nine();
			break;

		default: break;
	}

	return ;
}

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("Enter one or more arguments.\n");
		return 0;
	}

	if (argc > 1)
	{
		int counter = 0;
		for (counter = 1; counter < argc; ++counter)
		{
			int i = 0;
			for (i = 0; argv[counter][i] != '\0'; ++i)
			{
				if (!(isdigit(argv[counter][i])))
				{
					continue;
				}
				else print_num(argv[counter][i]);
			}
		}
	}

	return 0;
}

