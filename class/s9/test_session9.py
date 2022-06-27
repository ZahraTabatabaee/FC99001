import session9

def test_get_x():
    x_result = session9.get_x( -1, 1, 0.5)
    expected = [ -1, -0.5, 0, 0.5, 1]
    assert x_result == expected


def test_get_x2():
    input = [ -1, -0.5, 0, 0.5, 1]
    x2_range = session9.get_x2(input)
    expected = [ 1, 0.25 , 0, 0.25, 1]
    assert x2_range == expected

def test_get_x3():
    input = [ -1, 0, 1]
    x3_range = session9.get_x3(input)
    expected = [-1, 0, 1]
    assert x3_range == expected