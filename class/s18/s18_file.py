score_file = open("score.txt")

score_str = score_file.readline()
score_file.close()
score = int(score_str)
print("current score is {:5}".format(score))
score = score + 1
print("new score is {:5}".format(score))

score_file = open("score.txt", "w")
score_file.write(str(score))
score_file.close()