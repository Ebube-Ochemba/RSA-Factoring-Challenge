# RSA Factoring Challenge

> This project was on RSA factoring.

## Summary

I learnt about RSA, how HTTPS provide security, Prime Factorization and the significance of RSA.

## Requirements

- OS: Ubuntu 20.04 LTS
- Time limit: Program must not run for more than 5 seconds.

## Files

> Each file contains the solution to a task in the project.

- [ ] [factors](https://github.com/Ebube-Ochemba/RSA-Factoring-Challenge/blob/master/factors): A Python script that factorizes as many numbers as possible into a product of two smaller numbers.
> Usage:
```sh
$ factors <file>
```
> - Output format:

> - `n=p*q`

> - one factorization per line

> - `p` and `q` (_might not be prime numbers, but are factors of_ `n`)

- [ ] [rsa](https://github.com/Ebube-Ochemba/RSA-Factoring-Challenge/blob/master/rsa): The same as `factors`, but `p` and `q` are always prime numbers.

> - [ ] [Cfactors.c](https://github.com/Ebube-Ochemba/RSA-Factoring-Challenge/blob/master/Cfactors.c): A C Source code for `factors` (_incomplete_). To test it:
```sh
$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu99 Cfactors.c -o Cfactors -lm
$ Cfactors <file>
```
> - [tests](https://github.com/Ebube-Ochemba/RSA-Factoring-Challenge/blob/master/tests): A folder of test files. Provided by Alx.
