def main():
    iters = int(input())
    for _ in range(iters):
        bits = str(bin(int(input()))[2::])
        print(sum(1 for i in bits if i == "1"))


if __name__ == "__main__":
    main()
