def print_left_triangle(base):
    for i in range(base):
        if i % 2 == 0 :
            print("%"*(i+1))
        else :
            print("*"*(i+1))

print_left_triangle(4)
