
/**
 * @file sort_word_array.c
 * @author Sixfried Vi Brittania (kellyhantan@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2020-09-27
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include "lib_utils.h"
	char **sort_word_array(char **str)
	{
		int i, j, k;
		for (i = 0; str[i]; i++);
		char **out = malloc(i*sizeof(char));
		for (j = 0; j < i; j++)
			out[j] = malloc(25*sizeof(char));
		for (i = 0; str[i]; i++)
			out[i] = str[i];
		for (i = 0; out[i]; i++)
		{
			for (j = 0; out[i][j]; j++);
			char *cout = malloc(j*sizeof(char));
			for(j = 0; out[j]; j++)
			{
				for(k = 0; out[j][k] && out[i][k]; k++)
                                        if(out[j][k] != out[i][k])
                                                break;
				if(out[j][k] > out[i][k])
				{
					cout = out[j];//
					out[j] = out[i];
					out[i] = cout;
				}
			}
		}
		return out;
                free (out);
	}
