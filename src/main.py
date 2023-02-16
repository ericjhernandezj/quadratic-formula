import math
import sys

a: int = 0
b: int = 0
c: int = 0

x1: float = 0
x2: float = 0

a = int(input("Enter a: "))
b = int(input("Enter b: "))
c = int(input("Enter c: "))

if b**2 - 4 * a * c < 0:
    print("\nUsing the set of real numbers: There is no solution.")
    sys.exit()

x1 = round(((- b) + math.sqrt(b**2 - 4 * a * c)) / (2 * a), 3)
x2 = round(((- b) - math.sqrt(b**2 - 4 * a * c)) / (2 * a), 3)

if x1 == x2:
    print(f"\nThe only solution is: {x1}.")
else:
    print(f"\nX1 equals to {x1} and X2 equals to {x2}.")
