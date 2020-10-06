
/**
 * @file my_strcpy.c
 * @author Sixfried Vi Brittania (kellyhantan@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2020-09-26
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <stdlib.h>

	/**
	 * @fn my_strcpy 
	 * 
	 * @brief copy a string given on arg to an other table
	 * 
	 * @param host 
	 * @param tocpy 
	 */



	void my_strcpy(char *host, char *tocpy)
	{
		for (int i = 0; tocpy[i]; i++)
			host[i] = tocpy[i];
	}
