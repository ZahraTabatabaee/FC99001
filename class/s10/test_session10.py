import session10


def test_reverse():
    l = [ 1, 2, 10, 3, 5]
    rl = session10.reverse(l)
    assert rl == [5, 3, 10, 2, 1]


def test_swap():
    mylist = [ 1, 5, 10]
    session10.swap(mylist, 0, 2)
    assert mylist == [10, 5, 1]


def test_sort():
    l = [1, 2, 10, 3, 5]
    rl = session10.sort(l)
    assert rl == [10, 5, 3, 2, 1]

    l = [1, 2, 10, 3, 5, 15, -10]
    rl = session10.sort(l)
    assert rl == [15, 10, 5, 3, 2, 1, -10]


def test_find_prime_factors():
    prime_factors = session10.find_prime_factors(95)
    assert prime_factors == [19, 5]

    prime_factors = session10.find_prime_factors(12)
    assert prime_factors == [3, 2]