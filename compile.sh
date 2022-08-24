#!/bin/sh
# This is the script used to compile the project

set -e

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
