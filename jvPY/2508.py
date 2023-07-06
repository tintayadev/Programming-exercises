import math

n = int(input())
for i in range(n):
    a, b = map(int, input().split(" "))
    primer = math.ceil(math.sqrt(a))
    cnt = 0
    while primer * primer <= b:
        cnt += 1
        primer += 1
    print(cnt)