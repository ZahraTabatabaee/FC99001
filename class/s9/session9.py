import matplotlib.pyplot as plt
import math


def get_x( minx, maxx, step):
    x_range = []
    current_x = minx
    while current_x <= maxx :
        x_range.append(current_x)
        current_x = current_x + step
    return x_range


def get_x2(range_x):
    range_y = []
    for x in range_x :
        range_y.append(x**2)
    return range_y


def get_x3(range_x):
    range_y = []
    for x in range_x :
        range_y.append(x**3)
    return range_y


def get_sinx(range_x):
    range_y = []
    for x in range_x:
        range_y.append(math.sin(x))
    return range_y

def get_cos(range_x):
    range_y = []
    for x in range_x:
        range_y.append(math.cos(x))
    return range_y
 

def factorial(n):
    product = 1
    for i in range(1,n+1):
        product = product * i
    
    return product

def taylorsin(x, n):
    sum = 0
    sign = 1
    for i in range(n):
        w = 2 * i + 1
        sum = sum + sign * (x ** w) / factorial(w)
        sign = sign * -1
    return sum

def get_taylorsinx(range_x, n):
    range_y = []
    for x in range_x:
        range_y.append(taylorsin(x, n))
    return range_y

def taylorcos(x, n):
    sum = 0
    sign = 1
    for i in range(n):
        w = 2 * i 
        sum = sum + sign * (x ** w) / factorial(w)
        sign = sign * -1
    return sum


def get_taylorcosx(range_x, n):
    range_y = []
    for x in range_x:
        range_y.append(taylorcos(x, n))
    return range_y

if __name__ == '__main__':
    x = get_x(-3.14,3.14,.1)
    y_cos = get_cos(x)
    plt.plot(x, y_cos)
    plt.show()

    
# for i in range(1, 5):
#     y_tcos = get_taylorcosx(x, i)
#     plt.plot(x, y_tcos)
# plt.show()




# x = get_x(-3.14,3.14,.1)
# y_sin = get_sinx(x)
# plt.plot(x, y_sin)

# for i in range(1, 5):
#     y_tsin = get_taylorsinx(x, i)
#     plt.plot(x, y_tsin)
# plt.show()


# x = get_x( -5, 5, 0.1)
# y = get_x2(x)
# plt.plot( x, y)
# plt.show()