
def swap(nums, x, y):
    temp = nums[x]
    nums[x] = nums[y]
    nums[y] = temp

def reverse(numbers):
    t = len(numbers)
    for i in range(int(t/2)):
        swap(numbers, i, t-i-1)    

    return numbers

def find_max(nums, from_pos, to_pos):
    max_pos = from_pos
    for i in range(from_pos+1, to_pos+1):
        if nums[max_pos] <  nums[i]:
            max_pos = i
    return max_pos

def sort(numbers):
    l = len(numbers)
    for i in range(l):
        max_pos = find_max(numbers, i, l-1)
        swap(numbers, i, max_pos)
    return numbers


def is_prime(x):
    for n in range(2 ,x):
        if x % n == 0:
            return False
    return True


def find_prime_factors(x):
    prime_factors = []
    for n in range(2,x):
        if is_prime(n): 
            if x % n == 0:
                prime_factors.append(n)
           
    return sort(prime_factors)

# number = [ 5, 10, 4 , 6 , 15]
# sort(number)