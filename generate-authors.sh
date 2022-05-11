#!/bin/sh

# When any command fails the shell exits
set -e

{
cat << EOF
# This file lists all individuals having contributed to the repository.
# This file is generated using ./generate_authors.sh
EOF
echo
git log --format='%aN <%aE>' | LC_ALL=C.UTF-8 sort -uf
} > AUTHORS
