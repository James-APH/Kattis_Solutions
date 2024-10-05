nums = []
counts = []
counts.append(0)
n = int(input())
n10 = 10 * n


for i in range(n10):
    nums.extend(map(int, input().split()))

for i in range(51):
    counts.append(nums.count(i))


filt = [i - 1 for i, x in enumerate(counts) if float(x / n10) > 0.2]

print(" ".join(map(str, filt)) if len(filt) > 0 else -1)
