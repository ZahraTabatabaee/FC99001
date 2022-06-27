import math
def factorial(n):
    mul = 1
    for i in range(1,n+1):
        mul = mul * i
    if n == 0 :
        mul = 1
    return mul

def eulers_constant(precision):
    n = 1
    sum = 1
    while (1/factorial(n) > precision)  :
        sum = sum + 1/factorial(n)
        n = n+1
    return sum

def exp(x, precision):
    n = 1
    sum = 1
    while ((x**n)/factorial(n) > precision):
        sum = sum + (x**n)/factorial(n)
        n = n + 1
    return sum
        
# print(exp(1,0.01))

def exp2(x, precision):
    n = 1
    sum = 0
    w = 1
    while w > precision :
        sum = sum + w
        w = w * x/n 
        n = n + 1
    return sum

def abs(x):
    if x < 0 :
        return (-1*x)
    else :
        return x


def near(x, y, closeness):
    c = abs(x-y)
    if x < y :
        x = y
    d = closeness*x
    if c <= d :
        return True
    return False

# print(near(999,1000,.001))
# print(near(exp(1,.01),exp2(1,.01),.001))
# print(exp2(1,0.01))

def power(x, y):
    if y>=0 :
        return x**int(y)

def sin(x, precision):
    x = x*(math.pi)/180
    sum = 0
    
    n = 1
    sign = 1
    w = 1
    while abs(w) > precision:
        p = power(x, n)
        w = sign*(p/factorial(n))
        if abs(w)> .000001:
            sum = sum + w
            n = n + 2
            sign = -1 * sign
    return sum

# print(sin(30,.001))

def square_root(x, precision):
    lowerBound = 0
    upperBound = x
    while (upperBound - lowerBound)>precision:
        midbound = (upperBound + lowerBound)/2
        if (midbound**2) > x:
            upperBound = midbound
        if (midbound**2) < x:
            lowerBound = midbound  
        if (midbound**2) == x:
            return midbound               
    return midbound

# print(square_root(2,.000001))

def root(x, n, precision):
    lowerBound = 0
    upperBound = x
    while (upperBound - lowerBound)>precision:
        midbound = (upperBound + lowerBound)/2
        if power(midbound, n ) > x :
            upperBound = midbound    
        if power(midbound, n ) < x :
            lowerBound = midbound    
        if power(midbound, n ) == x :
            return midbound    
    return midbound

# print(root(8,3,.000001))

def ln(x, precision):
    lowerBound = 0
    upperBound = x
    while (upperBound - lowerBound) > precision:
        midbound = (upperBound + lowerBound)/2
        w = math.exp(midbound)
        if w < x :
            lowerBound = midbound  
        if w > x :
            upperBound = midbound
    return midbound

# print(ln(100 , 0.001))


# print(eulers_constant(.001))