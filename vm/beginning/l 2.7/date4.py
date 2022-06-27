def day():
    d = days_before_date(dayNumber, monthNumber, year)+1
    if d % 7==0 :
        return "monday"
    if d % 7==1 :
        return "Tuesday"
    if d%7==2 :
        return "Wednesday"
    if d%7==3 :
        return "Thursday"
    if d%7==4 :
        return "Friday"
    if d%7==5 :
        return "Saturday"
    if d%7==6 :
        return "Sunday"

def days_before_date(dayNumber, monthNumber, year):
    if is_leap_year(year):
        if monthNumber == 1 :
            return (dayNumber - 1)
        if monthNumber == 2 :
            return (31+dayNumber - 1)
        if monthNumber == 3 :
            return (31+29+dayNumber - 1)
        if monthNumber == 4 :
            return (62+29+dayNumber - 1)
        if monthNumber == 5 :
            return (92+29+dayNumber - 1)
        if monthNumber == 6 :
            return (123+29+dayNumber - 1)
        if monthNumber == 7 :
            return (153+29+dayNumber - 1)
        if monthNumber == 8 :
            return (184+29+dayNumber - 1)
        if monthNumber == 9 :
            return (215+29+dayNumber - 1)
        if monthNumber == 10 :
            return (245+29+dayNumber - 1)
        if monthNumber == 11 :
            return (276+29+dayNumber - 1)
        if monthNumber == 12 :
            return (306+29+dayNumber - 1)
    else :
        if monthNumber == 1 :
            return (dayNumber - 1)
        if monthNumber == 2 :
            return (31+dayNumber - 1)
        if monthNumber == 3 :
            return (31+28+dayNumber - 1)
        if monthNumber == 4 :
            return (62+28+dayNumber - 1)
        if monthNumber == 5 :
            return (92+28+dayNumber - 1)
        if monthNumber == 6 :
            return (123+28+dayNumber - 1)
        if monthNumber == 7 :
            return (153+28+dayNumber - 1)
        if monthNumber == 8 :
            return (184+28+dayNumber - 1)
        if monthNumber == 9 :
            return (215+28+dayNumber - 1)
        if monthNumber == 10 :
            return (245+28+dayNumber - 1)
        if monthNumber == 11 :
            return (276+28+dayNumber - 1)
        if monthNumber == 12 :
            return (306+28+dayNumber - 1)

def is_leap_year(year):
    if year % 400 == 0 or ( year % 4 == 0 and year % 100 != 0) :
        return True
    else :
        return False

while True:
    year = 2014
    monthNumber = int(input("pleas inter monthnumber:"))
    dayNumber = int(input("pleas inter daynumber:"))
    print(day())