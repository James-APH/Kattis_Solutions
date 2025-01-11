def fib(n):
    if n <= 1:
        return n
    a, b = 0, 1
    for i in range(0, n - 1):
        temp = b
        b = a + b
        a = temp
    return b


n = int(input())
print(f"{fib(n-1)} {fib(n)}")
