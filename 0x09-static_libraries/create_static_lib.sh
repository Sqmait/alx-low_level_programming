#!/bin/bash
gcc -wall -pedantric -werror -wextra -c *.c
ar rc liball.a *.o
