import math
class student:
    def __init__(self, id, name):
        self.id = id
        self.name = name

if __name__ == "__main__":
    pass

def string_len(str):
    count = 0
    for i in str :
        count += 1
    return count

def str_cpy(str):
    return str

def char_count(str,char):
    count = 0
    for i in str :
        if i == char :
            count += 1
    return count

def longest_char_sequence(str,char):
    count = 0
    tmp = []
    for i in str :
        if i == char :
            count += 1
        else :
            tmp.append(count)
            count = 0
    tmp.append(count)
    max = 0
    for x in tmp:
        if x > max:
            max = x
    return max

def count_pattern(str1,str2):
    count = 0
    l = len(str2)
    


def apply(list1 , list2, func ,actual):
    l = len(list1)
    for i in range(l) :
        a= func(list1[i],list2[i])
        actual.append(a)
    return actual

def change_student_name(s, new_name):
    s.name = new_name
    return s

def change_student_id(s, new_id):
    s.id=new_id
    return s

def student_tostring(s):
    string = s.id + ":" + s.name
    return string

def create_student(id,name):
    student.id = id
    student.name = name
    return student

def cos(x,epsilon):
    sign = 1
    kasr = 2*epsilon
    sum = 0
    i = 0
    while abs(kasr) > epsilon:
        kasr =sign*(x**(2*i)/math.factorial(2*i))
        sum = sum + kasr
        sign = sign * (-1)
        i = i + 1
    return sum

def arc_cos(cosx , epsilon):
    down = 0
    up = math.pi/2
    mid = (up +down)/2
    while (up - down) > epsilon :
        if cosx < cos(mid,epsilon):
            down = mid
            mid =(up +down)/2
        if cosx > cos(mid,epsilon):
            up = mid
            mid =(up +down)/2
    return mid
