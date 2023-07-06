t = int(input())

for i in range(t):
    nums = input()
    cnt_p = 0
    cnt_i = 0
    for j in range(len(nums)):
        if j % 2 == 0:
            cnt_p += int(nums[j])
        else:
            cnt_i += int(nums[j])
    if cnt_p == cnt_i:
        print("SI")
    else:
        print("NO")