#!/usr/bin/python3
from nqueens import NQueens

if __name__ == "__main__":
    import sys
    if len(sys.argv) != 2:
        print("Usage: nqueens N")
        sys.exit(1)

    try:
        N = int(sys.argv[1])
    except ValueError:
        print("N must be a number")
        sys.exit(1)

    if N < 4:
        print("N must be at least 4")
        sys.exit(1)

    # Call the class method to solve N Queens
    NQueens.solve(N)

