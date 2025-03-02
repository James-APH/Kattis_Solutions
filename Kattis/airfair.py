flights = int(input())
lis = [int(input()) for _ in range(0, flights)]
max_cost = max(lis)
min_cost = min(lis)
payment = int(min_cost - max_cost / 2)
print(payment if payment > 0 else 0)
