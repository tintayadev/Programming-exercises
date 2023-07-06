n = int(input())
sum_x = 0
sum_y = 0
sum_z = 0
for _ in range(n):
    x, y, z = map(int, input().split(" "))
    sum_x += x
    sum_y += y
    sum_z += z
if not sum_x and not sum_y and not sum_z:
    print("YES")
else:
    print("NO")