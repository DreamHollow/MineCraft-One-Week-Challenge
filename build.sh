#!/bin/sh

# Linux only

BUILD_DIR='build'
BINARY='mc-one-week'

cmake -S . -B build

if [ -d $BUILD_DIR ]
then
	cd $BUILD_DIR
	make
	
	if [ -f $BINARY ]
	then
		echo "Binary built successfully."
	else
		echo "ERROR: Binary failed to build or is corrupt!"
		return 1
	fi
else
	echo "Build directory not found!"
	return 1
fi

return 0