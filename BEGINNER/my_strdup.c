
/**
 * @file my_strdup.c
 * @author Sixfried Vi Brittania (kellyhantan@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2020-09-26
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include "lib_utils.h"

	char *my_strdup(char *str)
	{
		char *out = malloc(sizeof(char));
		for (int i = 0; str[i]; out[i] = str[i], i++);
		return out;
		free (out);
	}
