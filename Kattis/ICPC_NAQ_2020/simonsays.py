test_cases = int(input())

for i in range(test_cases):
    string = str(input())
    if string[:11] == "Simon says ":
        print(''.join(string[11:]))
