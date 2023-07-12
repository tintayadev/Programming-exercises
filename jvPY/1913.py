n = int(input())

a, b = 1, 1
print(a)

i = 2
while i <= n:
    for j in range(1, min(b + 1, n - i + 2)):
        print(j)
        i += 1
        if i > n:
            break

    a, b = b, a + b 