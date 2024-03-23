#!/usr/bin/python3

def best_score(a_dictionary):
    # Check if the dictionary is None or empty
    if not a_dictionary:
        return None

    # Initialize variables to keep track of the maximum score and corresponding key
    max_score = float("-inf")
    best_key = None

    # Iterate through the key-value pairs in the dictionary
    for key, value in a_dictionary.items():
        # Update the maximum score and corresponding key if a higher score is found
        if value > max_score:
            max_score = value
            best_key = key

    return best_key
