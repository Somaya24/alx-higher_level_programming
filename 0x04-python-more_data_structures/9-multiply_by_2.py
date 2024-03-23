#!/usr/bin/python3

def multiply_by_2(a_dictionary):
    # Create a new dictionary to store the multiplied values
    new_dict = {}

    # Iterate through the key-value pairs in the original dictionary
    for key, value in a_dictionary.items():
        # Multiply each value by 2 and store it in the new dictionary
        new_dict[key] = value * 2

    return new_dict
