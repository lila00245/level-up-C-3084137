#include <stdio.h>

char *ordinal(int v)
{
	/* ..1st, ..2nd, ..3rd, ..xth */
	/* 11th, 12th, 13th */
	if (v == 11 || v == 12 || v == 13) { return "th"; }
	
	else if (v % 10 == 1) { return "st"; }
	else if (v % 10 == 2) { return "nd"; }
	else if (v % 10 == 3) { return "rd"; }
	else { return "th"; }
}

int main()
{
	int c;

	/* output a table of 100 numbers */
	for (c = 1; c <= 20; c++)
	{
		printf("%3d%s\t%3d%s\t%3d%s\t%3d%s\t%3d%s\n",
					 c, ordinal(c),
					 c + 20, ordinal(c + 20),
					 c + 40, ordinal(c + 40),
					 c + 60, ordinal(c + 60),
					 c + 80, ordinal(c + 80));
	}

	return (0);
}
