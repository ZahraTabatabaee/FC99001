cat_file = open("cat.txt") 
cat_str = cat_file.readlines()

def count(X):
    total = 0
    for line in cat_str:
        found = line.find(X)
        if found != -1 :
            total += 1
    print(total)

while True:
    word = input("enter word: ")
    word = word.lower()
    count(word)

