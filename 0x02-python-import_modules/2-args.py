#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    counter = len(sys.argv) - 1

    if counter == 0:
        print("{} arguments.".format(counter))
    elif counter == 1:
        print("{} argument:".format(counter))
    else:
        print("{} arguments:".format(counter))
    for i in range(counter):
        print("{}: {}".format(i + 1, sys.argv[i + 1]))
