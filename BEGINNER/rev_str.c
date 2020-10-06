
/**
 * @file rev_str.c
 * @author Sixfried Vi Brittania (kellyhantan@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2020-09-26
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include "lib_utils.h"

	char *rev_str(char *str)
	{
		int i, j = 0;
		char *out = malloc(sizeof(char));
		for (i = 0; str[i]; i++);
		for (; str[i-1]; i--, j++)
			out[j] = str[i-1];
		return out;
	}
