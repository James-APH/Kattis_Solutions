n = int(input())
started_sum = 0
stopped_sum = 0
for i in range(0, n):
    if i % 2 == 0:
        started_sum += int(input())
    else:
        stopped_sum += int(input())

print("still running" if n % 2 == 1 else stopped_sum - started_sum)
