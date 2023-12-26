#!/usr/bin/python3

"""
factors
Factorize as many numbers as possible
"""

import sys


def factors(filename=""):
    """Factorize as many numbers as possible into a product
    of two smaller numbers.

    parameters
    ----------

    """

    if len(sys.argv) is not 2:
        print("Usage: factors <file>")
    else:
        filename = sys.argv[1]

    try:
        with open(filename, "r", encoding=("utf8")) as text:
            lines = text.read()
    except IOError:
        print("Unable to open file: {:s}".format(filename))

    print(filename, end='')
