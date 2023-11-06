def min_fealdad(n, heights):
    max_height = max(heights)
    min_height = min(heights)
    initial_fealdad = max_height - min_height
    
    return initial_fealdad

t = int(input())
for _ in range(t):
    n = int(input())
    heights = list(map(int, input().split()))
    
    result = min_fealdad(n, heights)
    print(result)
