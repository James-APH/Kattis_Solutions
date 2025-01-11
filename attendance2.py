absent = []
n = int(input())
lis = [input() for _ in range(0, n)]
previous_pair = False

for i, e in enumerate(lis):
    if i == n - 1:
        if e != "Present!":
            absent.append(e)
        break
    elif lis[i + 1] == "Present!":
        continue
    elif e != "Present!" and lis[i + 1] != "Present!":
        absent.append(e)

if len(absent) >= 1:
    for a in absent:
        print(a)
else:
    print("No Absences")
