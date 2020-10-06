
/**
 * @file dec_to_base.c
 * @author Sixfried Vi Brittania (kellyhantan@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2020-09-28
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include "lib_utils.h"

	char *dec_to_base(const long nbr, int base)
	{
		if (base > 10)
		{
			write(1, "Utilisez plutôt la fonction dec_to_base_special()", 49);
			return NULL;
		}
		int tmp, i = 0, j = 0;
		char *out = malloc(sizeof(char)), *cout = malloc(sizeof(char));
		do
		{
			out[i] = tmp%base + '0';
			tmp = (tmp - tmp%base)/base;
			i++;
		}
		while (tmp != 0);
		for (; out[i-1];i--, j++)
			cout[j] = out[i-1];
		return cout;
		free(out);
		free(cout);
	}
