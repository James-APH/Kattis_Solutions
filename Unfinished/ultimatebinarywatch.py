def cbl(ele: int):
    return bin(ele)[:2]


ht, ho, mt, mo = map(cbl, map(int, list(str(input()).split())))
print(f'{ht[0]} {ho[0]}   {mt[0]} {mo[0]}')
print(f'{ht[1]} {ho[1]}   {mt[1]} {mo[1]}')
print(f'{ht[2]} {ho[2]}   {mt[2]} {mo[2]}')
print(f'{ht[3]} {ho[3]}   {mt[3]} {mo[3]}')
