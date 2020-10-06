
/**
 * @file is_same_str.c
 * @author Sixfried Vi Brittania (kellyhantan@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2020-09-26
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include "lib_utils.h"

	int is_same_str(char *str, char *cmp)
	{
		int i, j;
		for (i = 0, j = 0; str[i] && cmp[j]; i++, j++);
		if (i == j)
		{
			for (i = 0; str[i]; i++)
			{
				if (str[i] == cmp[i])
					j = 1;
				else
					return 0;
			}
		}
		else
			return 0;
		return j;
	}
