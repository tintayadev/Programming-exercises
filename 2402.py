# Buscando a "X"
# https://jv.umsa.bo/problem.php?id=2402

n, k, x = map(int,input().split())

nums = list(map(int, input().split()))

for i in range(n//k):
    if x in nums[k*i:k*(i+1)]:
        print(x,"EXISTE EN EL SECTOR", i+1)
    else:
        print(x,"NO EXISTE EN EL SECTOR", i+1)