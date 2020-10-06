
/**
 * @file count_words.c
 * @author Sixfried Vi Brittania (kellyhantan@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2020-09-27
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <stdlib.h>

	int count_words(char *str)
	{
		int nbr = 0, i;
		for (i = 0; str[i] && !((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')); i++);
		if (!str[i])
			return 0;
		nbr += 1;
		for (; str[i]; i++)
			if (str[i] == ' ')
				nbr++;
		return nbr;
	}
