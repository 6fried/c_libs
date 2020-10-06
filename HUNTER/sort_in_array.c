
/**
 * @file sort_in_array.c
 * @author Sixfried Vi Brittania (kellyhantan@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2020-09-28
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include "lib_utils.h"

	int *sort_in_array(int *table)
	{
		int i, j, nbr;
		for (i = 0; table[i]; i++);
		int *out = malloc((i)*sizeof(int));
		for (i = 0; table[i]; i++)
			out[i] = table[i];
		for(i = 0; out[i]; i++)
		{
			for (j = i; out[j]; j++)
			{
				if(out[i] > out[j])
				{
					nbr = table[j];
					out[j] = out[i];
					out[i] = nbr;
				}
			}
			j = 0;
		}
		return out;
		free(out);
	}
