def print_cone(b):
    if b % 2 == 1 :
        center = int((b+1)/2)
        print(" "*(center-1)+"^")
        for i in range(1,center-1):
            print(" "*(center-i-1)+"/"*i+"|"+"\\"*i)

for i in range(2,9):
    print_cone(i)