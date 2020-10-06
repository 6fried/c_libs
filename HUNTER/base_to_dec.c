
/**
 * @file base_to_dec.c
 * @author Sixfried Vi Brittania (kellyhantan@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2020-09-27
 * 
 * @copyright Copyright (c) 2020
 * iso9001
 */

#include "lib_utils.h"

	char *base_to_dec(const long nbr, const int base)
	{
		int r = 0, i,  tmp = nbr;
		char *cout = malloc(sizeof(char)), *out = malloc(sizeof(char));
		do
		{
			cout[r] = tmp%10;
			tmp = (tmp - tmp%10)/10;
			r++;
		}
		while (tmp != 0);
		for (i = r; i >= 0; i--)
		{
			tmp *= base;
			tmp += cout[i];
		}
		do
		{
			cout[i] = tmp%10 + '0';
			tmp = (tmp - tmp%10)/10;
			i++;
		}
		while (tmp != 0);
		for (r = 0; i >= 0; r++, i--)
			out[r] = cout[i];
		return out;
		free(cout);
		free(out);
	}
