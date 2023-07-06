n, m = map(int, input().split())
tasks = list(map(int, input().split()))

currHouse = 1
totalTime = 0

for i in range(m):
    if tasks[i] >= currHouse:
        time = tasks[i] - currHouse
    else:
        time = n - currHouse + tasks[i]
    totalTime += time
    currHouse = tasks[i]

print(totalTime)
