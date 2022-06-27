print('Enter your n:')
x = input()
x = int(x)

def average_of_squares0(x):
    sum = 0
    for i in range(x):
        sum = sum + i*i
    return sum/(x-1)
    

print(average_of_squares0(x))