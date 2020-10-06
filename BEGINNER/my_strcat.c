
/**
 * @file my_strcat.c
 * @author Sixfried Vi Brittania (kellyhantan@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2020-09-26
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include "lib_utils.h"

	char *my_strcat(char *host, const char *tocpy)
	{
		int i, j;
		for (i = 0, j = 0; host[i] && tocpy[j]; i++, j++);
		char *file = malloc((i+j)*sizeof(char));
		for (i = 0; host[i]; i++)
			file [i] = host[i];
		host = malloc((i+j)*sizeof(char));
		for(j = 0; tocpy[j]; j++)
		{
			file [i] = tocpy[j];
			i++;
		}
		for(i=0; file[i]; i++)
			host[i] = file[i];
		free(file);
		return host;
	}
