import sys
N = int(sys.argv[1])

for num in range(2, N + 1):
    prime = True  

    for i in range(2, num):
        if num % i == 0:
            prime = False
            break

    if prime:
        print(num, end=' ')