#!/bin/bash
gcc -wall -pandemic -werror -wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
