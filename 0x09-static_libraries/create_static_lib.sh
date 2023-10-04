#!/bin/bash

gcc -c *.c
ar rc liball.a *.o
ranlib liball
rm -f *.o

echo "static library created"
