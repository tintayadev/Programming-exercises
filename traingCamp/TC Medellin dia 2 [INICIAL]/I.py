n, m, k = map(int, input().split(" "))

# n     Ketlin;s men
# m     Canute's men
# k     n ketlin's men required to kill one canute's men
# n/ k >= m
if n/k >= m:
    print("Iron fist Ketil")
else:
    print("King Canute")