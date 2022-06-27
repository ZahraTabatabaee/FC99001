def is_leap_year(year):
    if year % 400 == 0 or ( year % 4 == 0 and year % 100 != 0) :
        print("true")
    else :
        print("false")

is_leap_year(1792)
is_leap_year(1796)
is_leap_year(1800)
is_leap_year(1804)
is_leap_year(1900)
is_leap_year(1904)
is_leap_year(2000)
is_leap_year(2014)
