import exam
import math
import pytest

def test_q0_string_len():
    assert exam.string_len("123456") == 6
    assert exam.string_len("abcd0") == 5
    assert exam.string_len("") == 0
    assert exam.string_len("00000") == 5

def test_q1_str_cpy():
    pch1 = "123456"
    pch1_copy = exam.str_cpy(pch1)
    assert pch1_copy == "123456"
    pch1 = "a23456"
    assert pch1_copy == "123456"

    pch1 = "aabbccdw"
    pch1_copy = exam.str_cpy(pch1)
    assert pch1_copy == "aabbccdw"
    pch1 = "aab1ccdw"
    assert pch1_copy == "aabbccdw"    

def test_q2_char_count():
    count = exam.char_count("ababa", 'a')
    assert count == 3

    count = exam.char_count("ababa", 'b')
    assert count == 2

    count = exam.char_count("123412340", '1')
    assert count == 2

    count = exam.char_count("123412340", '0')
    assert count == 1

    count = exam.char_count("123412340", 'a')
    assert count == 0  

def test_q3_longest_char_sequence():
    count = exam.longest_char_sequence("abbbbaa", 'a')
    assert count == 2

    count = exam.longest_char_sequence("abbbbaa", 'b')
    assert count == 4

    count = exam.longest_char_sequence("aaaabaa", 'a')
    assert count == 4

    count = exam.longest_char_sequence("aaaababaa", 'a')
    assert count == 4

    count = exam.longest_char_sequence("aaaababaa", 'b')
    assert count == 1

    count = exam.longest_char_sequence("abababababa", 'b')
    assert count == 1    

def test_a4_count_pattern():
    count = exam.count_pattern("aba", "ab")
    assert count == 1

    count = exam.count_pattern("alibcalidefali", "ali")
    assert count == 3

    count = exam.count_pattern("101101", "101")
    assert count == 2

    count = exam.count_pattern("101010101", "101")
    assert count == 4

def sub(a, b):
    return a - b

def add(a, b):
    return a + b

def test_q5_function_pointer():
    list1 = [1, 3, 2, 5, 4]
    list2 = [1, 2, 0, 2, 0]
    sub_expected = [0, 1, 2, 3, 4]
    add_expected = [2, 5, 2, 7, 4]
    sub_actual = []
    add_actual = []

    exam.apply(list1, list2, sub, sub_actual)
    assert sub_actual == sub_expected

    exam.apply(list1, list2, add, add_actual)
    assert add_actual == add_expected

    list1 = [0, 2, 5]
    list2 = [1, 3, 2]
    sub_expected = [-1, -1, 3]
    add_expected = [1, 5, 7]
    sub_actual = []
    add_actual = []

    exam.apply(list1, list2, sub, sub_actual)
    assert sub_actual == sub_expected

    exam.apply(list1, list2, add, add_actual)
    assert add_actual == add_expected


# @pytest.mark.skip(reason="not implemented")
# def test_q6_change_student():
#     s = exam.student( "98521121", "Zhila Arghavan")
#     new_id = "98521122"
#     exam.change_student_id(s, new_id)
#     assert new_id == s.id

#     new_name = "Ali Mardani";
#     exam.change_student_name(s, new_name)
#     assert new_name == s.name    

#     new_id = "96000001"
#     exam.change_student_id(s, new_id)
#     assert new_id == s.id

#     new_name = "Homa Sarbaz";
#     exam.change_student_name(s, new_name)
#     assert new_name == s.name    
    
# @pytest.mark.skip(reason="not implemented")
# def test_q7_student_tostring():
#     s = exam.student("98521121", "Zhila Arghavan")
#     str = exam.student_tostring(s)
#     assert str == "98521121:Zhila Arghavan"

#     s = exam.student("98522321", "Keykhosro Ghobadi")
#     str = exam.student_tostring(s)
#     assert str == "98522321:Keykhosro Ghobadi"

# @pytest.mark.skip(reason="not implemented")
# def test_q8_create_student():
#     id = "98521121"
#     name = "Zhila Arghavan"
#     ps = exam.create_student(id, name)
#     assert id == ps.id
#     assert name == ps.name

#     id = "98522321"
#     name = "Keykhosro Ghobadi"
#     ps = exam.create_student(id, name)
#     assert id == ps.id
#     assert name == ps.name

# @pytest.mark.skip(reason="not implemented")
# def test_q10_test_cos():
#     epsilon = 0.001
#     x = math.pi/2
#     cos_x = exam.cos(x, epsilon)
#     assert abs(cos_x-math.cos(x)) <= epsilon

#     x = math.pi/3
#     cos_x = exam.cos(x, epsilon)
#     assert abs(cos_x-math.cos(x)) <= epsilon

# @pytest.mark.skip(reason="not implemented")
# def test_q11_test_arc_cos():
#     epsilon = 0.001
#     cos_x = 0.5
#     x = exam.arc_cos(cos_x, epsilon)
#     assert abs(x - math.acos(cos_x)) <= epsilon

#     cos_x = 0.3
#     x = exam.arc_cos(cos_x, epsilon)
#     assert abs(x - math.acos(cos_x)) <= epsilon
