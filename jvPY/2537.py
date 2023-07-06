lista = list()

n = int(input())
for i in range(n):
    lista.append(input().split(" "))
cnt_r = 0
for elem in lista:
    cnt = elem.count("1")
    if cnt > 1:
        cnt_r += 1
print(cnt_r)


