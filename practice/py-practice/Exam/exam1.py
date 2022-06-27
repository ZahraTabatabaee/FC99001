def q1_add(a, b):
    return a + b

def q2_print_add(a, b):
    c = a + b 
    print(c)

def q3_print_square(a, b):
    print(a*b)
    for i in range(b-2):
        print(a," "*(b-4),a)
    print(a*b)
def is_odd(x):
    if x % 2 == 1:
        return True
    if x % 2 == 0 :
        return False
def q4_sum_odd_squares(a,b):
    sum = 0
    for i in range(a,b):
        if is_odd(i):
            sum = sum + i ** 2
    return sum

def q5_sum_value_squares(a):
    sum = 0
    for i in a :
        sum = sum + i ** 2
    return sum

def q6_sum_num_indices(a, b):
    sum = 0
    for i in b:
        sum = sum + a[i]
    return sum

def q7_get_new_fib_array(a,b,c):
    d = [a,b]
    for i in range(c-2):
        n = (a*b)-2
        a = b
        b = n
        d.append(n)
    return d

# def q8_get_phone_numbers(file_name,name):
#     file = open(file_name)
#     entire_file = file.read()
#     # lines = entire_file.splitlines()
#     tokens = entire_file.split("\n")
#     lines = tokens.split(",")
#     print(lines)
    
# queries = ["Ali", "Zohre"]
# q8_get_phone_numbers("phonebook1.txt", queries)

def q8_get_phone_numbers( myfile , queries) :

    dic = {​​}​​

    result = []

    myfile = open(myfile)

    files = myfile.read()

    myfile.close()

    files = files.splitlines()

    for line in files:

        line = line.split(",")

        dic[line[0].lower()] = line[1]

    for i in queries :

        i = i.lower()

        if i in dic :

            result.append(dic[i])

        else:

            result.append("na")

    return result