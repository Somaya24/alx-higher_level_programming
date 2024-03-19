#!/usr/bin/python3
def multiple_returns(sentence):
    le = len(sentence)
    first = sentence[0] if le > 0 else None
    return le, first
