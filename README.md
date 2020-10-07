
# C_LIBS  

C_LIBS is a small compilation of useful C functions  

## About C_LIBS

### Built with  

C_LIBS has been coded only in C using 

  * fcntl.h
  * stdarg.h
  * stdlib.h
  * sys/stat.h
  * sys/types.h
  * unistd.h
libs  

See more info about included function in the [full doumentation](doc/html/index.html).

## COMPILATION

To compile the librairy and use it, you have to:

1. Open a terminal in the C_LIBS directory
2. Run make
  * **make** or **make all** for full compilation (lib, delete useless and/or compilation file, create doc)
  * **make doc** to make only documentation
  * **make clean** to delete all useless file such as tmps, object files (*.o) and others
  * **make fclean**vto delete the past compiled lib and the documentation
3. Enjoy your lib

## USAGE

After compiling the librairy, you have to copy and past it in you project repository, then for example if you're using GCC for compilation, you have to run:  
`$ gcc $(SRC) -L. -access/path/to/c_libs`

## AUTHORS
GitHub: [6fried][1]  
Email: <hohelric@gmail.com>

## LICENCE

**MIT License**  

Copyright (c) 2020 [6fried][1]  

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:  

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.  

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.  

[1]:https://github.com/6fried/
