/* SkipArg.c
	Skip one command line argument - skip tabs and spaces. */

#include "Everything.h"

const char *
SkipArg (const char *targv)
{
	const char *p;

	p = targv;
		/* Skip up to the next tab or space. */
	while (*p != '\0' && *p != ' ' && *p != '\t') p++;
		/* Skip over tabs and spaces to the next arg. */
	while (*p != '\0' && (*p == ' ' || *p == '\t')) p++;
	return p;
}


