array_len, sub_array_len = map(int, input().split(" "))
lis = list(map(int, input().split(" ")))
count = 0
for i in range(0, array_len):
    doubles = 0
    if lis[i] % 2 == 0:
        if sub_array_len + i - 1 < array_len:
            for x in range(i, sub_array_len + i):
                if lis[x] % 2 == 0:
                    i += sub_array_len
                    doubles += 1
            count += 1 if doubles >= 2 else 0
        else:
            break

print(count)
