# sample at least k squares
# Mirko breaks the bar in pieces such that he has k squares, and leaves the rest
# to slavko, can only break bars in their exact centers.

# Get minimal number of breaks
# Get smallest bar size mirko must buy to have at least k squares

# The first link will contain one int, k

# input = number of squares
# output = bar size , breaks

# Smallest unit is 1:

# odd inputs will always have a 1, even inputs can start out at 2

# given that inputs could have > 2 chocolate bars, must use list to store data 

# Given 6:


# Greedy? Optimization for sure, maybe dynamic?
# try to think of tabulation answer



k = int(input())
kbin = bin(k)[2:]
breaks = k.count(1)


lis = []

if k % 2 == 0:
    lis.append(2)
else:
    lis.append(1)

for i in range(breaks):
    print("i: ", i)
    if sum(lis) == k:
        break
    if sum(lis) > k:
        lis = [i if i != (sum(lis) - k) else 0 for i in lis]
        break
    else:
        ength = len(lis)
        lis.append(lis[length - 1] * 2)

print(f'{max(lis)*2} {len(lis)}')
