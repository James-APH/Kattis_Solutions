from string import ascii_lowercase

num_words = int(input())
missing_letters = ""

for i in range(num_words):
    words = str(input())
    for alpha in ascii_lowercase:
        if alpha not in words and alpha.upper() not in words:
            missing_letters += alpha
    print("pangram" if len(missing_letters) == 0 else "missing " + missing_letters)
