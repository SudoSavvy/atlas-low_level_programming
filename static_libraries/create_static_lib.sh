#!/bin/bash
chmod +x create_static_lib.sh

gcc -c *.c

ar rcs liball.a *.o