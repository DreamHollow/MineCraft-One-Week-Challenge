#!/bin/sh

BUILD_DIR='build'
BINARY='mc-one-week'

if [ -d "$BUILD_DIR" ]
then
	cd "$BUILD_DIR" 
	if [ -f "$BINARY" ]
	then
		./"$BINARY"
	else
		echo "Unable to find executable."
	fi
else
	echo "Unable to find build directory."
fi
