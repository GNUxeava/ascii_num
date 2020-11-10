#ifndef ASCII_NUM
#define ASCII_NUM

#include <stdio.h>

/* just function prototypes */

void print_zero();
void print_one();
void print_two();
void print_three();
void print_four();
void print_five();
void print_six();
void print_seven();
void print_eight();
void print_nine();
void print_horizontal();


/*
 * 	*****
 */
void print_horizontal()
{
	int i = 0;
	for (i = 0; i < 5; ++i)
	{
		printf("*");
	}
	printf("\n");

	return ;
}

/*
 * 	*****
 * 	*   *
 * 	*   *
 * 	*   *
 * 	*****
 */
void print_zero()
{
	int i = 0;
	for (i = 0; i < 5; ++i)
	{
		if (i == 0 || i == 4)
		{
			print_horizontal();
		}
		else printf("*   *\n");
	}

	return ;
}

/*
 * 	*
 * 	*
 * 	*
 * 	*
 * 	*
 */
void print_one()
{
	int i = 0;

	printf("\n");
	for (i = 0; i < 5; ++i)
	{
		printf("*\n");
	}

	return ;	
}

/*
 * 	*****
 * 	    *
 * 	*****
 * 	*
 * 	*****
 */
void print_two()
{
	printf("\n");

	int i = 0;
	for (i = 0; i < 5; ++i)
	{
		if (!(i % 2))
		{
			print_horizontal();
		}
		else if (i == 1)
		{
			printf("%5s\n", "*");
		}
		else printf("*\n");
	}

	return;
}

/*
 * 	*****
 * 	    *
 * 	*****
 * 	    *
 * 	*****
 */
void print_three()
{
	printf("\n");

	int i = 0;
	for (i = 0; i < 5; ++i)
	{
		if (!(i % 2))
		{
			print_horizontal();
		}
		else printf("%5s\n", "*");
	}

	return ;
}

/*
 * 	*   *
 * 	*   *
 * 	*****
 * 	    *
 * 	    *
 */
void print_four()
{
	printf("\n");

	int i = 0;
	for (i = 0; i < 5; ++i)
	{
		if (i < 2)
		{
			printf("*   *\n");
			continue;
		}
		else if (i == 2)
		{
			print_horizontal();
		}
		else printf("%5s\n", "*");
	}

	return ;
}

/*
 * 	*****
 * 	*
 * 	*****
 * 	    *
 * 	*****
 */
void print_five()
{
	printf("\n");

	int i = 0;
	for (i = 0; i < 5; ++i)
	{
		if (!(i % 2))
		{
			print_horizontal();
		}
		else if (i == 1)
		{
			printf("*\n");
		}
		else printf("%5s\n", "*");
	}

	return ;
}

/*
 * 	*****
 * 	*
 * 	*****
 * 	*   *
 * 	*****
 */
void print_six()
{
	printf("\n");

	int i = 0;
	for (i = 0; i < 5; ++i)
	{
		if (!(i % 2))
		{
			print_horizontal();
		}
		else if (i == 1)
		{
			printf("*\n");
		}
		else printf("*   *\n");
	}

	return ;
}

/*
 * 	*****
 * 	    *
 * 	    *
 * 	    *
 * 	    *
 */
void print_seven()
{
	printf("\n");

	int i = 0;
	print_horizontal();
	for (i = 0; i < 4; ++i)
	{
		printf("%5s\n", "*");
	}

	return ;
}

/*
 * 	*****
 * 	*   *
 * 	*****
 * 	*   *
 * 	*****
 */
void print_eight()
{
	printf("\n");

	int i = 0;
	for (i = 0; i < 5; ++i)
	{
		if (!(i % 2))
		{
			print_horizontal();
		}
		else printf("*   *\n");
	}

	return ;
}

/*
 * 	*****
 * 	*   *
 * 	*****
 * 	    *
 * 	    *
 */
void print_nine()
{
	printf("\n");

	int i = 0;
	for (i = 0; i < 5; ++i)
	{
		if (i == 0 || i == 2)
		{
			print_horizontal();
		}
		else if (i == 1)
		{
			printf("*   *\n");
		}
		else printf("%5s\n", "*");
	}

	return ;
}

#endif
