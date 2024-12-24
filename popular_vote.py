iters = int(input())

for i in range(iters):
    candidates = int(input())
    lis = []
    for i in range(candidates):
        candidate = int(input())
        lis.append(candidate)
    if (len(set(lis))) == 1 or (lis.count(max(lis))) > 1:
        print("no winner")
        continue
    elif max(lis) > sum(lis) / 2:
        print("majority winner")
        continue
    elif max(lis) < sum(lis) / 2:
        print("minority winner")
        continue


def majority_winner(lis):
    if max(lis) > sum(lis) / 2:
        print("majority_winner")
