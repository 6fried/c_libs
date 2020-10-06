
/**
 * @file empty_file.c
 * @author Sixfried Vi Brittania (kellyhantan@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2020-09-27
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include "lib_utils.h"

	void empty_file( char *access)
	{
		int file = open (access, O_TRUNC);
		close(file);
	}
