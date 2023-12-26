# RSA Factoring Challenge

> This project was on RSA factoring.

## Summary

I learnt about RSA, how HTTPS provide security, Prime Factorization and the significance of RSA.

## Requirements

- OS: Ubuntu 20.04 LTS

## Files

> Each file contains the solution to a task in the project.

- [factors](https://github.com/Ebube-Ochemba/RSA-Factoring-Challenge/blob/master/factors): A Python script that factorize as many numbers as possible into a product of two smaller numbers.
> Usage:
```sh
$ factors <file>
```
> - Output format:

> - `n=p*q`

> - one factorization per line

> - `p` and `q` (_might not be prime numbers, but are factors of_ `n`)

- [rsa](https://github.com/Ebube-Ochemba/RSA-Factoring-Challenge/blob/master/rsa):

> - [Trial.c](https://github.com/Ebube-Ochemba/RSA-Factoring-Challenge/blob/master/Trial.c): Trial C Source code for `factors` (_incomplete_). To test it:
```sh
$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu99 Trial.c -o Trial -lm
```
> - [tests](https://github.com/Ebube-Ochemba/RSA-Factoring-Challenge/blob/master/tests): A folder of test files. Provided by Alx.
