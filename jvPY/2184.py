
casos = int(input())
for _ in range(casos):
    n = int(input())
    nums = list(map(int, input().split(" ")))
    nums_aux = sorted(nums)
    if nums_aux[0] == nums_aux[1]:
        print(nums.index(nums_aux[-1]))
    else:
        print(nums.index(nums_aux[0]))
