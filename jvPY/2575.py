# Gripe-143
# https://jv.umsa.bo/problem.php?id=2575

n, k = map(int, input().split())
nums = list(map(int, input().split()))
suma = 0
for i in range(n-k+1):
    suma += sum(nums[i:i+k])/k
    # print(suma)
print(int(suma))