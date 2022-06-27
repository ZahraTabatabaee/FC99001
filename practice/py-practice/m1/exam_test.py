import exam

def test_add():
    assert exam.add(1, 2) == 3
    assert exam.add(0, 0) == 0
    assert exam.add(-1, 2) == 1

def test_power():
    assert exam.power(2, 10) == 1024

def test_sum():
    list = [1, 5, 2, 4, 12, 6, 15, 3, 2]
    s = exam.sum(list)
    assert s == 50

def test_sum_odd_values():
    list = [1, 5, 2, 4, 12, 6, 15, 3, 2]
    s = exam.sum_odd_values(list)
    assert s == 24    

def test_sum_odd_index():
    list = [1, 5, 2, 4, 12, 6, 15, 3, 2]
    s = exam.sum_odd_index(list)
    assert s == 18    

def test_is_prime():
    assert exam.is_prime(7)
    assert exam.is_prime(23)
    assert not exam.is_prime(25)

def test_next_prime():
    assert exam.next_prime(23) == 29
    assert exam.next_prime(30) == 31