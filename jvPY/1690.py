# Partida
m, n = map(int, input().split())

total = m * n
cnt = 0
l = []
for i in range(m):
    nums = list(map(int, input().split()))
    negativos = filter(lambda x: x < 0, nums)
    l.append(len(list(negativos)))
cnt = sum(l)
# print(total - cnt)
# print(cnt)

if total - cnt > cnt and cnt > 1:
    print("ESTAS SEGURO")
else:
    print("HUYE RAPIDO")