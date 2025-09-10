import math

def is_prime(n):
    if n <= 1:
        return False
    if n <= 3:
        return True
    if n % 2 == 0 or n % 3 == 0:
        return False
    i = 5
    while i * i <= n:
        if n % i == 0 or n % (i + 2) == 0:
            return False
        i += 6
    return True

def solve(q):
    if q == 1 or is_prime(q):
        print(1)
        print(0)
        return

    divisors = set()
    for i in range(2, int(math.isqrt(q)) + 1):
        if q % i == 0:
            if i != q:
                divisors.add(i)
            if q // i != q and q // i != i:
                divisors.add(q // i)

    # Remove the number itself and 1
    divisors = [d for d in divisors if d != 1 and d != q]

    # If only one non-trivial divisor
    if len(divisors) == 1:
        print(2)
        return

    # Try finding a move that leads to a losing state (i.e., prime number)
    for d in divisors:
        if is_prime(d):
            print(1)
            print(d)
            return

    # Otherwise, first player loses
    print(2)

# Example usage:
q = int(input())
solve(q)
6