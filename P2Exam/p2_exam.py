def q1_get_max(a,b,c):
    l = [a,b,c]
    lenl = len(l)
    max = l[0]
    for i in range(lenl):
        if l[i]>max :
            max = l[i]
    return max

def sort1(nums):
    num_len = len(nums)
    for i in range(len(nums)): 
        for n in range(i + 1, len(nums)): 
            if nums[i] > nums[n]: 
                nums[i], nums[n] = nums[n], nums[i] 
    return nums 

def q2_is_right_angled(a,b,c):
    ls = [a,b,c]
    s = sort1(ls)
    if s[0]**2 + s[1]**2== s[2]**2 :
        return True
    return False

def q3_array_fsum(a,b,c):
    l = len(a)
    sum = 0
    for i in range(l):
        x = (a[i]*b[i])+c[i]
        sum = sum + x
    return sum

def q4_string_shuffle(string):
    l = len(string)
    s = ""
    for i in range(0,l,2):
        tmp = string[i]
        tmp2 = string[i+1]
        s = s+ str(tmp2)+str(tmp)
    return s

def q5_last_index_of(str1 ,str2 ):
    tmp = []
    for i in range(0,len(str1),len(str2)):
        if str1[i]==str2[0]:
            found = 1
            for j in range(len(str2)):
                if(i+j)<len(str1):
                    if str1[i+j]!=str2[j]:
                        found = 2
            if found == 1 :
                tmp.append(i)

    max = -1
    for i in range(len(tmp)-1) :
        if i > max:
            max = i

    return max


def q6_sort(a,b,c,d):
    l = [a,b,c,d]
    s = sort1(l)
    a = s[3]
    b = s[2]
    c = s[1]
    d = s[0]
    return a,b,c,d

def q7_generic_sort(a,b,c,d,func):
    if func == is_bigger :
        a = s[3]
        b = s[2]
        c = s[1]
        d = s[0]
        return a,b,c,d
    if func == is_smaller :
        a = s[0]
        b = s[1]
        c = s[2]
        d = s[3] 
        return a,b,c,d