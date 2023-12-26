#!/usr/bin/python3

"""
factors
Factorize as many numbers as possible
"""

import sys


def factors():
    """Factorize as many numbers as possible into a product
    of two smaller numbers.
    """

    print("I have started")

    if len(sys.argv) != 2:
        raise Exception("Usage: factors <file>")

    try:
        with open(sys.argv[1], "r", encoding=("utf8")) as text:
            lines = text.read()
    except IOError:
        raise Exception("Error: Unable to open {:s}".format(sys.argv[1]))

    print(lines)
