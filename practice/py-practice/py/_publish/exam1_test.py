import exam1
import pytest

# @pytest.mark.skip(reason="Not Implemented Yet")
# def test_q0_distance():
#     actual = exam1.q0_distance(0,0,0,1)
#     assert 1 == actual
#     actual = exam1.q0_distance(0,0,4,3)
#     assert 5 == actual
#     actual = exam1.q0_distance(1,1,0,0)
#     assert 1.4142135623730951 == actual

# @pytest.mark.skip(reason="Not Implemented Yet")
# def test_q1_poly1():
#     actual = exam1.q1_poly1(3,3,4)
#     assert 15 == actual
#     actual = exam1.q1_poly1(2,3,3)
#     assert 9 == actual



def test_q2_poly1_str():
    actual = exam1.q2_poly1_str(2, 5)
    assert '2x+5' == actual    
    actual = exam1.q2_poly1_str(3, 4)
    assert '3x+4' == actual


def test_q3_digit_sum():
    actual = exam1.q3_digit_sum(34123)
    assert 13 == actual
    actual = exam1.q3_digit_sum(123)
    assert 6 == actual


def test_q4_filter_dividable():
    nums = [5, 2, 15, 25, 3]
    actual = exam1.q4_filter_dividable(nums, 5)
    assert [5, 15, 25] == actual
    actual = exam1.q4_filter_dividable(nums, 3)
    assert [15, 3] == actual


def test_q5_poly_n():
    actual = exam1.q5_poly_n([2,1,2], 3)
    assert 23 == actual    
    actual = exam1.q5_poly_n([1,3,2,1], 2)
    assert 23 == actual    
    actual = exam1.q5_poly_n([1,1,4,2,1], 2)
    assert 51 == actual    

def test_q6_poly_n_str():
    actual = exam1.q6_poly_n_str([2,1,2])
    assert '2+1x+2x^2' == actual    
    actual = exam1.q6_poly_n_str([1,3,2,1])
    assert '1+3x+2x^2+1x^3'== actual    
    actual = exam1.q6_poly_n_str([1,1,4,2,1])
    assert '1+1x+4x^2+2x^3+1x^4' == actual


def test_q7_poly_n_str2():
    actual = exam1.q7_poly_n_str2([2,1,2])
    assert '2x^2+x+2' == actual    
    actual = exam1.q7_poly_n_str2([2,0,2])
    assert '2x^2+2' == actual    
    actual = exam1.q7_poly_n_str2([1,3,2,1])
    assert 'x^3+2x^2+3x+1' == actual    
    actual = exam1.q7_poly_n_str2([1,1,4,2,1])
    assert 'x^4+2x^3+4x^2+x+1' == actual