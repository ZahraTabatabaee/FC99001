import mathfunction

def test_get_max():
    nums = [1, 5, 10, 0, 15, 12]
    assert mathfunction.get_max(nums) == 15

    nums = [-100, 50, 10, 0, 15, 12]
    assert mathfunction.get_max(nums) == 50


def test_get_sum():
    nums = [1, 5, 10, 0, 15, 12]
    assert mathfunction.get_sum(nums) == 43

    nums = [-100, 50, 10, 0, 15, 12]
    assert mathfunction.get_sum(nums) == -13

def test_get_sum1():
    nums = [1, 5, 10, 0, 15, 12]
    assert mathfunction.get_sum(nums) == 43

    nums = [-100, 50, 10, 0, 15, 12]
    assert mathfunction.get_sum(nums) == -13

def test_get_sum_odd():
    nums = [1, 5, 10, 0, 15, 12]
    assert mathfunction.get_sum_odd(nums) == 17

    nums = [-100, 50, 10, 0, 15, 12]
    assert mathfunction.get_sum_odd(nums) == 62    

def test_get_sum_odd_num():
    nums = [1, 5, 10, 0, 15, 12]
    assert mathfunction.get_sum_odd_num(nums) == 21

    nums = [-100, 50, 10, 0, 15, 12]
    assert mathfunction.get_sum_odd_num(nums) == 15   

def test_sort():
    nums = [ 1, 5, 10, 0, 15, 12]
    assert mathfunction.sort(nums) == [ 0, 1, 5, 10, 12, 15]

    nums = [-100, 50, 10, 0, 15, 12]
    assert mathfunction.sort(nums) == [ -100, 0, 10, 12, 15, 50]



# def test_reverse():
#     nums = [ 1, 5, 10, 0, 15, 12]
#     assert mathfunction.reverse(nums) == [ 12, 15, 0, 10, 5, 1]

#     nums = [-100, 50, 10, 0, 15, 12]
#     assert mathfunction.reverse((nums)) == [ 12, 15, 0, 10, 50, 50, -100]