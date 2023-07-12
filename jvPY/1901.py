# Series reto 03
# https://jv.umsa.bo/problem.php?id=1901

cases = int(input())

for _ in range(cases):
    i = 1
    cnt = 0
    n, k = map(int, input().split(" "))
    while cnt < n:
        for j in range(k):
            if cnt < n:
                print(i, end=" ")
                cnt +=1
        i += 2
    print()