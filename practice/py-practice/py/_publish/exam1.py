# def q2_poly1_str(a,b):
#     str = ''
#     str = str.append(a)
#     str.append('x+')
#     str.append(b)
#     return str

def q2_poly1_str(a,b):
    string = str(a)+"x+"+str(b)
    return string

def q3_digit_sum(a):
    sum = 0 
    while(a>=1):
        d = a%10
        sum += d
        a =(a-d) /10
    return sum

def q4_filter_dividable(list1 , n):
    tmp = []
    for i in list1:
        if i % n == 0 :
            tmp.append(i)
    return tmp

def q5_poly_n(list1 , x):
    l = len(list1)-1
    sum = 0
    for i in list1:
        sum = sum + list1[l] * (x**(l))
        l -= 1
    return sum

def q6_poly_n_str(list1):
    l = len(list1)
    string = str(list1[0]) + "+" + str(list1[1]) + "x"
    b = 2
    while(b < l):
        string = string + "+" + str(list1[b]) + "x^" +str(b)    
        b += 1
    return string

def q7_poly_n_str2(list1):
    l = len(list1)
    string = ""
    for i in range(l-1):
        if list1[l-i-1]==1 :
            if (l-i-1)==1:
                string = string + "x" + "+"
            if (l-i-1)>1 :
                string = string + "x^" +str(l-i-1)+ "+" 
        if list1[l-i-1]>1 :
            if (l-i-1)==1:
                string = string +str(list1[l-i-1])+ "x" + "+" 
            if (l-i-1)>1 :
                string = string +str(list1[l-i-1])+ "x^" + str(l-i-1) + "+" 

    string = string + str(list1[l-1])
    return string
  