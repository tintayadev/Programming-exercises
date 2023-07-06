
def delete_numbers(nums):

    # First, check if the list already contains any numbers that are the result of the sum of two or three numbers.
    sums = set()
    for i in range(len(nums)):
        for j in range(i + 1, len(nums)):
            sums.add(nums[i] + nums[j])

    # Remove any numbers from the list that are already in the set of sums.
    for num in nums:
        if num in sums:
            nums.remove(num)

    # Next, delete all the numbers that aren't in the range of 0-9.
    nums = [num for num in nums if 0 <= num <= 9]

    # Finally, create a set of all the possible sums of two or three numbers in the list.
    new_sums = set()
    for i in range(len(nums)):
        for j in range(i + 1, len(nums)):
            new_sums.add(nums[i] + nums[j])

    # Finally, delete all the numbers that are in the set of sums.
    for num in nums:
        if num in new_sums:
            nums.remove(num)

    return nums


T = int(input())
for _ in range(T):
    nums = list(filter(lambda n: n < 10, list(map(int, input().split(" ")))))
    print(*delete_numbers(nums))
'''
Entrada 
=================
5
1 3 4 4 5 7 8
1 2 3 4 5 6 7
2 2 2 4 4 4 6
1 1 2 98 99 99 100
1 2 2 3 3 4 5
=================
Respuesta Correcta:
1 3 4
1 2 4
2 2 2
1 1 98
1 2 2
-----------------
Tu respuesta:
1 3 7
1 2 4
2 2 2 6
1 1
1 2 2 5

=================
'''