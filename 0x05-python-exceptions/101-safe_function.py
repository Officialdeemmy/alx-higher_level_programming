#!/usr/bin/python3
def safe_function(fct, *args):
    import sys
    try:
        result = fct(*args)
    except Exception as m:
        sys.stderr.write("Exception: {}\n".format(m))
        result = None

    return (result)
