#include "main.h"

/**
 * get_flag - turns on flags if _printf finds
 * a flag modifier in the format string
 * @s: character that holds the flag specifier
 * @flg: pointer to the struct flags in which we turn the flags on
 *
 * Return: 1 if a flag has been turned on, 0 otherwise
 * Authors: Olayiwola Okanlawon & Oyebode Adetunji
 */

int get_flag(char s, flags_t *flg)
{
	int i = 0;

	switch (s)
	{
		case '+':
			flg->plus = 1;
			i = 1;
			break;

		case ' ':
			flg->space = 1;
			i = 1;
			break;

		case '#':
			flg->hash = 1;
			i = 1;
			break;
	}
	return (i);
}
