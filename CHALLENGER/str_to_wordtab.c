
/**
 * @file str_to_wordtab.c
 * @author Sixfried Vi Brittania (kellyhantan@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2020-09-27
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include "lib_utils.h"

	char **str_to_wordtab(char *str, char sep)
	{
		int i, j, k;
		for (i = 0; str[i] && str[i] == sep; i++);
		for (j = 1; str[i]; i++)
			if (str[i] == sep)
				j++;
		int *wordid = malloc((j+1)*sizeof(int));
		for (i = 0; str[i] && str[i] == sep; i++);
		wordid [0] = i-1;
		for (j = 1; str[i]; i++)
			if (str[i] == sep)
			{
				wordid[j] = i;
				j++;
			}
		wordid[j] = i;
		char **out = malloc(j*sizeof(char));
		for (i = 0; i < j; i++)
			out[i] = malloc((wordid[i+1]-wordid[i])*sizeof(char));
		for (i = 1; wordid[i]; i++)
		{
			char *cout = malloc((wordid[i]-wordid[i-1])*sizeof(char));
			for(k = 0, j = wordid[i-1]+1; j < wordid[i]; j++, k++)
				cout[k] = str[j];
			out[i-1] = cout;
		}
		out[i-1] = NULL;
		return out;
		free (out);
	}

