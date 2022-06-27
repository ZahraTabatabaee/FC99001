def days_in_month(monthNumber, year):
    if monthNumber < 13 :
        if is_leap_year(year):
            if monthNumber == 2 :
                return 29
        else :
            a = [1, 3, 5, 7, 8, 10, 12]
            if monthNumber in a :
                return 31
            b = [4,6,9,11]
            if monthNumber in b :
                return 30
            if monthNumber == 2 :
                return 28

def is_leap_year(year):
    if year % 400 == 0 or ( year % 4 == 0 and year % 100 != 0) :
        return True
    else :
        return False

while True:
    year = int(input("pleas inter year:"))
    monthNumber = int(input("pleas inter monthnumber:"))
    print(days_in_month(monthNumber,year))
