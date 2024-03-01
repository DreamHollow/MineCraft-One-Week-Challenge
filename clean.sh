#!/bin/sh

# Do not modify this script unless necessary.

BUILD_DIR='build'

if [ -d $BUILD_DIR ]
then
	echo "Starting clean process..."
	echo "Removing $BUILD_DIR directory..."

	rm -r -f $BUILD_DIR

	if [ ! -d $BUILD_DIR ]
	then
		echo "$BUILD_DIR directory successfully cleaned."
	else
		echo "ERROR: $BUILD_DIR could not be removed."
		return 1
	fi
else
	echo "Target directory $BUILD_DIR does not exist and may have already been removed."
	return 1
fi

return 0