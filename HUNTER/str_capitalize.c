
/**
 * @file str_capitalize.c
 * @author Sixfried Vi Brittania (kellyhantan@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2020-09-28
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include "lib_utils.h"

	char *str_capitalize (char *str)
	{
		int i;
		for (i = 0; str[i]; i++);
		char *out = malloc(i*sizeof(char));
		for (i = 0; str[i] && !((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')); i++);
		if (!str[i])
			return NULL;
		for (int j = 0; str[i]; i++, j++)
			out[j] = str[i];
		if (out[0] >= 'a' && out[0] <= 'z')
			out[0] -= 32;
		for (i = 0; out[i]; i++)
		{
			if (!((out[i] >= 'A' && out[i] <= 'Z') || (out[i] >= 'a' && out[i] <= 'z')) && ((out[i+1] >= 'A' && out[i+1] <= 'Z') || (out[i+1] >= 'a' && out[i+1] <= 'z')))
			{
				i++;
				if (out[i] >= 'a' && out[i] <= 'z')
					out[i] -= 32;
			}
		}
		return out;
		free(out);
	}
