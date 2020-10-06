
/**
 * @file get_file_in_tabs.c
 * @author Sixfried Vi Brittania (kellyhantan@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2020-09-27
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include "lib_utils.h"

	char **get_file_in_tabs(char *fd)
	{
		int i, len, file;
		file = open(fd, O_RDWR);
		struct stat f_stat;
		stat(fd, &f_stat);
		len = f_stat.st_size;
		char *cout = malloc(len*sizeof(char));
		for (i = 0; i < len; i++)
			read(file, &cout[i], 1);
		char **out = str_to_wordtab(cout, '\n');
		return out;
		free (out);
	}
