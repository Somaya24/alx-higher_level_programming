#!/usr/bin/python3

def uniq_add(my_list=[]):
    # Create a set to store unique integers
    unique_set = set(my_list)
    
    # Sum up the elements of the set
    result = sum(unique_set)
    
    return result
