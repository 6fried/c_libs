
/**
 * @file find_hide_string.c
 * @author Sixfried Vi Brittania (kellyhantan@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2020-09-28
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include "lib_utils.h"

	int find_hide_string(char *hide, char *str)
	{
		int r, j = 0;
		for (int i = 0; hide[i]; i++)
		{
			for (; str[j] && hide[i] != str[j]; j++);
			if (!str[j])
				return 0;
			r = 1;
		}
		return r;
	}
