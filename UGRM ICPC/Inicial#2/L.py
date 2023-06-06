# Counting 2

'''
def contar_mayores(num, A):
    #cnt = 0
    A.sort(reverse = True)
    print(A)
    if A[0] < num:
        return 0
    for i in range(len(A)):
        print(A[i], num)
        if A[i] <= num:
            return i
    return 0

def busqueda_bin(arr, target):
    left = 0
    right = len(arr) - 1
    result = -1

    while left <= right:
        mid = (left + right) // 2

        if arr[mid] >= target:
            result = mid
            right = mid - 1
        else:
            left = mid + 1

    return len(arr) - result

n, q = map(int, input().split())
A = list(map(int, input().split()))
R = []

A.sort()

for i in range(q):
    num = int(input())
    R.append(busqueda_bin(A, num))

for elem in R:
    print(elem)
'''

def binary_search(arr, target):
    left = 0
    right = len(arr) - 1
    while left <= right:
        mid = (left + right) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    return left

def contar_mayores(num, A):
    index = binary_search(A, num)
    if A[index] >= num:
        return len(A) - index
    else:
        return len(A) - index - 1

n, q = map(int, input().split(" "))
A = list(map(int, input().split(" ")))
R = []
for i in range(q):
    num = int(input())
    R.append(contar_mayores(num, A))

for elem in R:
    print(elem)


