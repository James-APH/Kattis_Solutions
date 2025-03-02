n = int(input())
count = int(0)

for x in range(n):
    str = input().lower()
    if "pink" in str or "rose" in str:
        count += 1

if count == 0:
    print("I must watch Star Wars with my daughter")
else:
    print(count)
