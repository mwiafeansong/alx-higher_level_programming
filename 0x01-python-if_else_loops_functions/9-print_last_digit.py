#!/usr/bin/python3
def print_last_digit(number):
    if number < 0:
        lastdigit = -number % 10
        lastdigit = -lastdigit
        print(f"{lastdigit:d}", end="")
    elif number == 0:
        print(f"{number}", end="")
        lastdigit = 0
    else:
        lastdigit = number % 10
        print(f"{lastdigit:d}", end="")
    return lastdigit
