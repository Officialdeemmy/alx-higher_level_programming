#!/usr/bin/python3
def uniq_add(my_list=[]):
    new_set = set()
    if my_list:
        for item in my_list:
            new_set.add(item)
    return sum(new_set)
