
/**
 * @file is_number.c
 * @author Sixfried Vi Brittania (kellyhantan@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2020-09-20
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include "lib_utils.h"
	int is_number(char *str)
	{
		int j;
		for (int i = 0; str[i]; i++)
		{
			if(str[i] <= '9' && str[i] >= '0')
				j = 1;
			else
				return 0;
		}
		return j;
	}
