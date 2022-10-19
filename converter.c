#include "main.h"

/**
 * convert - converts number and base into string
 * @num: input number
 * @base: input base
 * @lowercase: flag if hexa values need to be lowercase
 * Return: result string
 * Authors: Olayiwola Okanlawon & Oyebode Adetunji
 */

char *convert(unsigned long int num, int base, int lowercase)
{
	static char *rep;
	static char buffer[50];
	char *p;

	rep = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";

	p = &buffer[49];

	*p = '\0';

	do {
		*--p = rep[num % base];
		num /= base;

	} while (num != 0);

	return (p);
}
