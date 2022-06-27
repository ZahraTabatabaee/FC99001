import mathfunctions

def test_is_odd():
    assert mathfunctions.is_odd(5) == True



def test_is_prime():
    assert mathfunctions.is_prime(2147483647) == True


def test_sum():
    result = mathfunctions.sum(2,3,4,5,6) 
    assert result == 20