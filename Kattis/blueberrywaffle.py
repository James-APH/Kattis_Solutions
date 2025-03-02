# INITIAL STATE = HORIZONTAL, blue berries are on the top of the
# waffle.

# Once started pan rotates at constant speed for a fixed duration

# The cooking time is set so that when the waffle maker stops, 
# the pan is not in a vertical position.

# The pan rotates at a rate of 180 degrees every r seconds, and 
# stops after f seconds.

# GOAL = findout whether the blueberry side of the waffle is
# up or down after the cooking pan returns to a horizontal
# horizontal position
# 10 34
# up 0
# down 10
# up 20
# down 30
# up 40

# looks like if over.5 

# input = r, f
r, f = map(int, input().split(' '))

if (f % r > r//2 and f % r < r):
    f = f - f % r + r


rotations = f // r
pos = (rotations) % 2

print('down' if pos == 1 else 'up')
