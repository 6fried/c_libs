
/**
 * @file lowercase.c
 * @author Sixfried Vi Brittania (kellyhantan@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2020-09-26
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include "lib_utils.h"

	char *lowercase(char *str)
	{
		char *upper = malloc(sizeof(int));
		for (int i = 0; str[i]; upper[i] = str[i], i++);
		for (int i = 0; str[i]; i++)
			if (65 <= str[i] && str[i] <= 90)
				upper[i] += 32;
		return upper;
		free(upper);
	}
