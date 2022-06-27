def make_head(w):
    center = int((w+1)/2)
    print(" "*(center-1)+"^")
    for i in range(1,center-1):
        print(" "*(center-i-1)+"/"*i+"|"+"\\"*i)

def make_separator(w):
    print("+"+"-"*(w-2)+"+")


def make_body(w,l):
    for i in range(l):
        print("+"+"*"*(w-2)+"+")
    make_separator(w)





def make_rocket(w,c,l):
    make_head(w)
    make_separator(w)

    for i in range(c):
        make_body(w,l)

    make_head(w)


make_rocket(9,2,5)
