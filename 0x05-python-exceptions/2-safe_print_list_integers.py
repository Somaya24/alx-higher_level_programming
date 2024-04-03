#!/usr/bin/python3
def safe_print_list_integers(my_list=[], x=0):
    printed_integers = 0
    try:
        for i in range(x):
            if isinstance(my_list[i], int):
                print("{:d}".format(my_list[i]), end="")
                printed_integers += 1
        print()
        return printed_integers
    except IndexError:
        print()
        return printed_integers
