
/**
 * @file dec_to_base_special.c
 * @author Sixfried Vi Brittania (kellyhantan@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2020-09-27
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include "lib_utils.h"

	char *dec_to_base_special (long nbr, int base, ...)
	{
		va_list ap;
		va_start (ap, base);
		char *car = malloc (base * sizeof(char));
		for (int i = 0; i < base; i++)
			car[i] = va_arg(ap, int);
		va_end(ap);
		int tmp = nbr, i = 0, j = 0;
		char *out = malloc(sizeof(char)), *cout = malloc(sizeof(char));
		do
		{
			out[i] = car[tmp%base];
			tmp = (tmp - tmp%base)/base;
			i++;
		}
		while (tmp != 0);
		for (; out[i-1];i--, j++)
			cout[j] = out[i-1];
		return cout;
		free(car);
		free(out);
		free(cout);
	}
