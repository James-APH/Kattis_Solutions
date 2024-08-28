# Note, this does not work, (takes too long on one of the test cases)
# but it definitly helped with creating the c++ solution
its = int(input())
temp = ""
word = ""
for i in range(its):
    temp = str(input())[::-1]
    word = temp + word

print(word)
