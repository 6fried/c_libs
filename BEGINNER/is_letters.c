
/**
 * @file is_letters.c
 * @author Sixfried Vi Brittania (kellyhantan@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2020-09-20
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include "lib_utils.h"

	int is_letters(char *str)
	{
		int j;
		for (int i = 0; str[i]; i++)
		{
			if((str[i] <= 'z' && str[i] >= 'a') ||(str[i] <= 'Z' && str[i] >= 'A') )
				j = 1;
			else
				return 0;
		}
		return j;
	}