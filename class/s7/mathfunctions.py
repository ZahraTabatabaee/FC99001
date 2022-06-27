def is_odd(n):
    return n%2 == 1


def is_prime(x):
    for n in range(2 , int(x ** 0.5)):
        if x % n == 0:
            return False


    return True



def sum(a,b,c,d,e):
    return a + b + c + d + e