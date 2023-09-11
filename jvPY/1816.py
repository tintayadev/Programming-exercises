def suma(n: int):
    return (n*(n+1))/2

m = int(input())
j = int(input())
res = suma(j-1) + suma(m-j)
print(int(res))