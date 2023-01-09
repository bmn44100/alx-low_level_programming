#!/bin/bash

for file in *.c; do
	gcc -c "$file"
	ar -rcs libmy.a "${file%.c}.o"
done \
