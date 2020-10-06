##
## Makefile 
## Printf clôné
##


CC =		gcc

AR =		ar

NAME =		output/libutils.a

CFLAGS =	-Wall -Werror -Iinclude

ARFLAGS =	-srv

SRC = 		$(shell find BEGINNER/ -name '*.c')\
		$(shell find HUNTER/ -name '*.c')\
		$(shell find CHALLENGER/ -name '*.c')\


all: 	 fclean $(NAME) clean docs

$(NAME): $(SRC)
		$(CC) $(CFLAGS) -c $^
		$(AR) $(ARFLAGS) $@ *.o

docs:
		doxygen

clean:
		rm -f *.o
		rm -f *~ BIGINNER/*~ include/*~ HUNTER/*~ CHALLENGER/*~ doc/*~
		rm -f a.out BEGINNER/a.out HUNTER/a.out CHALLENGER/a.out

fclean:		
		rm -f $(NAME)
		rm -fr doc
re: clean all

.PHONY: fclean clean re docs
