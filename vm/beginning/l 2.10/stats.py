min = 0
max = 0
sum = 0
number = 0
while True :
    x = int(input("enter your number : "))
    number = number + 1
    if x != -1 :
        if x > max:
            max = x
    if x != -1 :      
        if x < min :
            min = x
    if x != -1 :
        sum = sum + x 
        average = int(sum/number) 
    print("\n\n")
    print("The maximum = ", max)           
    print("The minimum = ", min) 
    print("The average = ", average)
    print("The number of entries = ", number) 
    print("\n\n")
    if x == -1 :
        break
      