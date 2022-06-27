def compute_change(x):
    if x < 100 :
        y = 100-x
        q = y//25
        print(q , "Quarter")
        d = (y-q*25)//10
        print(d , "dime")
        n = (y-q*25-d*10)//5
        print(n , "nickel")
        p = (y-q*25-d*10-n*5)
        print(p , "Penny")



while True:
    x = int(input("pleas inter number:"))
    compute_change(x)