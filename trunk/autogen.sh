#!/bin/sh

aclocal || exit 1
autoreconf -iv || exit 1
automake --add-missing || exit 1

./configure
