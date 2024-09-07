integers = map(int, input().split(" "))
sorted_integers = sorted(integers)
si0 = sorted_integers[0]
si1 = sorted_integers[1]
si2 = sorted_integers[2]

# all input will probably be in the range, on at least one side
# they are not nessecarily in order,
diff1 = abs(si1 - si0)
diff2 = abs(si2 - si1)

if diff1 == diff2:
    print(si2 + diff1)
elif diff1 < diff2:
    print(si1 + diff1)
else:
    print(si0 + diff2)
