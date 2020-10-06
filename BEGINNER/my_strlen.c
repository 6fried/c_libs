
/**
 * @file my_strlen.c
 * @author Sixfried Vi Brittania (kellyhantan@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2020-09-26
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include "lib_utils.h"

	int my_strlen (const char *str)
	{
		int i;
		for(i = 0; str[i]; i++);
		return i;
	}
