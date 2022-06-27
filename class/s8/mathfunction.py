def get_max(nums):
    max = nums[0]
    for n in nums:
        if n > max:
            max = n
    return max

def get_sum(nums):
    sum = 0
    for n in nums:
        sum = sum + n
    return sum
        
def get_sum1(nums):
    sum = 0
    num_len = len(nums)
    for i in range(num_len):
        sum = sum + nums[i]
    return sum

def get_sum_odd(nums):
    sum = 0
    num_len = len(nums)
    for i in range(num_len):
        if i % 2 == 1 :
            sum = sum + nums[i]
    return sum

def get_sum_odd_num(nums):
    sum = 0
    for i in nums :
        if i % 2 == 1:
            sum = sum + i 
    return sum

def sort(nums):
    num_len = len(nums)
    for i in range(len(nums)): 
        for n in range(i + 1, len(nums)): 
            if nums[i] > nums[n]: 
                nums[i], nums[n] = nums[n], nums[i] 
    return nums  


# def reverse(nums):
#     a , b 
#     c =a
#     a= b 
#     b = c      
#     return nums


    