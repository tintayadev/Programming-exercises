# Epicentro
# https://jv.umsa.bo/problem.php?id=1089

n = int(input())
for _ in range(n):
    num = input()
    if len(num) % 2 == 0:
        print("*")
    else:
        print(num[len(num)//2])