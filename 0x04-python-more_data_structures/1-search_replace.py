#!/usr/bin/python3

def search_replace(my_list, search, replace):
    # Create a new list to store the modified elements
    new_list = []

    # Iterate through each element in the original list
    for item in my_list:
        # Replace the element if it matches the search criteria
        if item == search:
            new_list.append(replace)
        else:
            new_list.append(item)
    return new_list
