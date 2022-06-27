class student:
    def __init__(self, id, name):
        self.id = id
        self.name = name

if __name__ == "__main__":
    pass

def string_len(str):
    count = 0
    for i in str:
        count = count + 1 
    return count

def str_cpy(pch):
    pch_copy = pch
    return pch_copy

def char_count(str , a):
    count = 0 
    for i in str :
        if i == a:
            count+=1
    return count

def longest_char_sequence(str , char):
    sum = 0
    tmp = []
    for i in str:
        if i == char:
            sum += 1
        else :
            tmp.append(sum)
            sum = 0
    tmp.append(sum)
    max = tmp[0]
    for j in tmp:
        if j > max:
            max = j
    return max

def count_pattern(str1 , str2):
    count = 0
    for i in range(len(str1)-len(str2)+1):
        found = True
        for j in range(len(str2)):
            if (str1[i+j] != str2[j]):
                found = False
                break
        if found == True:
            count = count +1
    return count

def apply(list1 , list2 , func , actual)