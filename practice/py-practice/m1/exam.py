def add(a, b):
    return a + b

def power(x, y):
    return x**y

def sum(x):
    sum = 0
    x_len = len(x)
    for i in range(x_len):
        sum = sum + x[i] 
    return sum

def sum_odd_values(x):
    sum = 0
    for i in x :
        if i % 2 == 1 :
            sum = sum + i 
    return sum

def sum_odd_index(x):
    sum = 0
    x_len = len(x)
    for i in range(x_len):
        if i % 2 == 1 :
            sum = sum + x[i]  
    return sum   

def is_prime(x):
    for i in range(2, x):
        if x % i == 0 :
            return False 
    return True

def next_prime(x):
    while x > 0 :
        x = x + 1
        if is_prime(x):
            return x