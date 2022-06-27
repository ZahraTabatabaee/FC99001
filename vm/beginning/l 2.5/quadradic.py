import math
print('Enter your a:')
a = input()
a = float(a)
print('Enter your b:')
b = input()
b = float(b)
print('Enter your c:')
c = input()
c = float(c)


d = b**2-4*a*c 

if d < 0 :
    print("This equation has no real answer")

if d == 0 :
    x = (-b/(2*a))
    print(x)

if d >= 0 :
    x1 = ((-b + math.sqrt(d))/(2*a))
    x2 = ((-b - math.sqrt(d))/(2*a))
    print(x1 ,  x2)



