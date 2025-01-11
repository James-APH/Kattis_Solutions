n = int(input())
min_lis = []
max_lis = []
for _ in range(n):
    min_, max_ = map(int, input().split())
    min_lis.append(min_)
    max_lis.append(max_)

min_temp = max(min_lis)
max_temp = min(max_lis)

if min_temp > max_temp:
    print("bad news")
else:
    print(f"{max_temp - min_temp + 1} {min_temp}")
