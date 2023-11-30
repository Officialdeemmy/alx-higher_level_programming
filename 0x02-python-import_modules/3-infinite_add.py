#!/usr/bin/python3
import sys

def infinity_add():
    sum = 0

    for i in range(len(sys.argv) - 1):
        sum += int(sys.argv[i + 1])
    print("{:d}".format(sum))


if __name__ == "__main__":
    infinity_add()
