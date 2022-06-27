
def factorial(n):
    mul = 1
    for i in range(1,n+1):
        mul = mul * i
    return mul
    
for i in range(1,21):
    print(i , factorial(i))
    