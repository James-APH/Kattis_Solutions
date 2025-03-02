bags, bag_num = map(int, input().split(' '))
lis = list(map(int, input().split(' ')))

index = lis.index(bag_num)


if index == 0:
    print("fyrst")
elif index == 1:
    print("naestfyrst")
else:
    print(f"{index+1} fyrst")
