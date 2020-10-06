
/**
 * @file nbr_to_string.c
 * @author Sixfried Vi Brittania (kellyhantan@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2020-09-26
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include "lib_utils.h"

	char *nbr_to_string( long nbr)
	{
		int tmp, i = 0, j = 0;
		char *out = malloc(sizeof(char)), *cout = malloc(sizeof(char));
		if (nbr >= 0)
			tmp = nbr;
		else
			tmp = -nbr;
		do
		{
			out[i] = tmp%10 + '0';
			tmp = (tmp - tmp%10)/10;
			i++;
		}
		while (tmp != 0);
		if (nbr < 0)
		{
			cout[0] = '-';
			j++;
		}
		for (; out[i-1];i--, j++)
			cout[j] = out[i-1];
		return cout;
		free(out);
		free(cout);
	}
