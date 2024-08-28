
its = int(input())
temp = ""
word = ""
for i in range(its):
    temp = str(input())[::-1]
    word = temp + word

print(word)
