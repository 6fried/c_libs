#ifndef STAT_LIB

#define STAT_LIB

#include <fcntl.h>
#include <stdarg.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>


    /**
	 * @brief Takes a string of char in a double array with a Separation char
	 * 
	 * The 'str' is divided in many parts according with the 'sep' 
	 * Each part is taken in a different line of a double table
	 * 
	 * @param str 
	 * @param sep 
	 * @return char** 
	 */

	char **str_to_wordtab(char *str, char sep);

    /**
	 * 
	 * @brief creates copy of a string and returns it
	 * 
	 * @param str 
	 * @return char* 
	 */

	char *my_strdup(char *str);

    /**
	 * @brief convert a given number into a string of char
	 * 
	 * @param nbr 
	 * @return char* 
	 */
	
	char *nbr_to_string( long nbr);
	
    /** 
	 * @brief reverse a given string  
	 * 
	 * @param str 
	 * @return char* 
	 */

	char *rev_str(char *str);
	
    /**
	 * @brief convert a number given in string of char to its integer equivalent
	 * 
	 * @param str 
	 * @return long 
	 */

	long string_to_nbr (char *str);
	
    /**
	 * @brief Turn all letters in a string of char to uppercase
	 * 
	 * @param str 
	 * @return char* 
	 */

	char *uppercase(char *str);

    /**
	 * @brief count the lenght of the given string
	 * 
	 * @param string 
	 * @return int 
	 */

	int my_strlen (const char *str);
	
    /**
	 * @brief check equalty between two strings of char
	 * 
	 * @param str 
	 * @param cmp 
	 * @return int 
	 */

	int is_same_str(char *str, char *cmp);
	
    /**
	 * @brief turn all letters of the given string of char in lowercase
	 * 
	 * @param str 
	 * @return char* 
	 */

	char *lowercase(char *str);
	
    /**
	 * @brief append the secong string of char given in args to the first 
	 * 
	 * @param host 
	 * @param tocpy 
	 * @return char* 
	 */

	char *my_strcat(char *host, const char *tocpy);
	
    /**
	 * @brief checks if the given string contains only numbers
	 * 
	 * @param str wich will be checked
	 * @return int 
	 */

	int is_number(char *str);
	
    /**
	 * @brief check if the given string only contains letters 
	 *  
	 * @param str
	 * @return int
	 */

	int is_letters(char *str);
	
    /**
	 * @brief Take the access to a file and empty it
	 * 
	 * @param access 
	 */

	void empty_file( char *access);
	
    /**
	 * @brief Draws a pyramid of given char with the given number of line
	 * 
	 * @param nbrline 
	 * @param car 
	 */

	void pyramid(int nbrline, char car);

    /**
	 * @brief Copies the file's content in a table, line by line
	 * 
	 * @param fd 
	 * @return char** 
	 */

	char **get_file_in_tabs(char *fd);
	
	/**
	 * @brief Sort a string of char in a double array
	 * 
	 * @param str 
	 * @return char** 
	 */

	char **sort_word_array(char **str);

	/**
	 * @brief Convert a number given from a base to its decimal form
	 * 
	 * @param nbr 
	 * @param base 
	 * @return char* 
	 */

	char *base_to_dec(const long nbr, const int base);

    /**
	 * @brief Converts a number from decimal to a given base
	 * 
	 * 	The particularity there is that we can crypt the output by replacing correct 
	 * 	caracters with others in order to get an other output...
	 * 
	 * @param nbr 
	 * @param base 
	 * @param ... 
	 * @return char* 
	 */

	char *dec_to_base_special (long nbr, int base, ...);
	
    /**
	 * @brief Counts how many words contains the given 'str'
	 * 
	 * @param str 
	 * @return int 
	 */

	int count_words(char *str);
	
    /**
	 * @brief Converts a number from decimal to a given base
	 * 
	 * @param nbr 
	 * @param base 
	 * @return char* 
	 */

	char *dec_to_base(const long nbr, int base);

    /**
	 * @brief Checks if a word/string of char is included in an other
	 * 
	 * For example, father is included in misfatherhood and also in mfiasthhoeord (m[f]i[a]s[t]h[h]o[e]o[r]d)
	 * 
	 * @param hide 
	 * @param str 
	 * @return int 
	 */

	int find_hide_string(char *hide, char *str);
	
	/**
	 * @brief Sorts a table of numbers given on args and return it ordered
	 * 
	 * @param table 
	 * @return int* 
	 */

	int *sort_in_array(int *table);

    /**
	 * @brief Put all the words' first letters of a sentence in uppercase
	 * 
	 * @param str 
	 * @return char* 
	 */

	char *str_capitalize (char *str);
	
#endif