
/**
 * @file string_to_nbr.c
 * @author Sixfried Vi Brittania (kellyhantan@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2020-09-26
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include "lib_utils.h"

	long string_to_nbr (char *str)
	{
		int  nbr = 0;
		for(int i = 0; str[i]; i++)
		{
			nbr *= 10;
			nbr += str[i]-'0';
		}
		return nbr;
	}
