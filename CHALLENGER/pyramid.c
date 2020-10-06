
/**
 * @file pyramid.c
 * @author Sixfried Vi Brittania (kellyhantan@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2020-09-27
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include "lib_utils.h"
	void pyramid(int nbrline, char car)
	{
		int i, j, beg, nbrput = 1, nbrcar = 2*nbrline+1;
		char **out = malloc (nbrline*nbrcar*sizeof(char));
		for (i = 0; i < nbrline+1; i++)
			out[i] = malloc((nbrcar)*sizeof(char));
		for (i = 0; i < nbrline; i++)
		{
			for (j = 0; j < nbrcar; j++)
				out[i][j] = ' ';
			out[i][nbrcar-1] = '\n';
		}
		beg = (nbrcar)/2;
		for (i = 0; i < nbrline; i++)
		{
			for (j = beg; j <= beg + nbrput-1; j++)
				out[i][j] = car;
			beg--;
			nbrput+=2;
		}
		for (i = 0; out[i]; i++)
			write (1, out[i], nbrcar);
	}
