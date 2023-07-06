# Pinos de Bowling


t = int(input())
for _ in range(t):
    cnt = 0
    n = int(input())
    nums = list(map(int, input().split(" ")))
    mayor = max(nums)
    menor = min(nums)

    primer_index = min(nums.index(mayor), nums.index(menor))+1
    segundo_index = max(nums.index(mayor), nums.index(menor))+1
    forma_a = segundo_index
    forma_b = primer_index + (1+n-segundo_index)
    forma_c = n-primer_index+1

    print(min(forma_a, forma_b, forma_c))



