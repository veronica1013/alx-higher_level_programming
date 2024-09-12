#!/usr/bin/python3
import sys

def main():
    # The first argument is the script name, so we start from index 1
    result = sum(int(arg) for arg in sys.argv[1:])
    print(result)

# Ensure that the code runs only when the script is executed directly
if __name__ == "__main__":
    main()

