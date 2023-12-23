#!/bin/sh

cmake -S . -B build
if [ -d 'build' ]
then
	cd build
	make
	return 0
else
	echo "Build directory not found!"
	return 1
fi
