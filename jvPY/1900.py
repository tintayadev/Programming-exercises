# Series reto 2
# https://jv.umsa.bo/problem.php?id=1900

cases = int(input())
for _ in range(cases):
    t = int(input())
    nums = [0, 0, 1, 1, 1, 1, 2, 2, 3, 3,]

    if t > len(nums):
        for i in range(len(nums), t+1, 2):
            if i % 2 == 0:
                nums.append(nums[i-1]+nums[i-3])
                nums.append(nums[i-1]+nums[i-3])
            else:
                nums.append(nums[nums[i-1]])
    for j in range(t):
        print(nums[j], end=" ")
    print()
