# 4ab+3a+3b = n
# n = 10

def find_values(n):
    for a in range(1, n):
        for b in range(1, n):
            if 4 * a * b + 3 * a + 3 * b == n:
                return True
    return False



n = int(input())
nums = map(int, input().split(" "))
cnt = 0
for elem in nums:
    if find_values(elem):
        cnt += 1
print(n - cnt)
