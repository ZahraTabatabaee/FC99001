def days_in_month(monthNumber):
    if monthNumber < 13 :
        a = [1, 3, 5, 7, 8, 10, 12]
        if monthNumber in a :
            print("31 days")
        b = [4,6,9,11]
        if monthNumber in b :
            print("30 days")
        if monthNumber == 2 :
            print("28 days")

while True:
    
    monthNumber = int(input("pleas inter monthnumber:"))
    days_in_month(monthNumber)
