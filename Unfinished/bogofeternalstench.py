# Looks like a good starting graph algorithm
# Dijkstras shortest path
# input 1: n, m
#          n = number of islands
#          m = number of direct bridges

# next m lines contains 3 ints:
# indicating that there is a direct bridge from island u
# to island v that changes your overall stench level by s
#
# u != v

# Create a adjacency matrix
#   0 1 2 3  4 
# 0 0 0 0 0  0
# 1 0 0 5 -2 0
# 2 0 0 0 0  1
# 3 0 0 0 0 10
# 4 0 0 0 0  0

adjacency_matrix = [][]

n, m = map(int, input().split(' '))
for i in range(1, m+1):
    u, v, s = map(int, input().split(' '))
    adjacency_matrix[u][v] = s

for i in range()

