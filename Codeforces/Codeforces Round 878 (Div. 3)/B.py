# Binary Cafe
# https://codeforces.com/contest/1840/problem/B

# n = 30
# nums = []
# for i in range(31):
#     nums.append(2**i)

# t = int(input())

# for i in range(t):
#     n, k = map(int, input().split(" "))


def binary_cafe(n, k):
    """
    Solves the Binary Cafe problem.

    Args:
	n: The number of coins Toma is willing to spend.
	k: The number of desserts in the binary cafe.

    Returns:
	The number of ways Toma can buy desserts for tasting.
    """

    # Initialize the answer to 0.
    answer = 0

    # Iterate through all possible combinations of desserts.
    for i in range(k + 1):
        for j in range(i + 1):
            # Check if the total cost of the desserts is <= n.
            if 2 * i + 2 * j <= n:
                # Increment the answer.
                answer += 1

    # Return the answer.
    return answer


def main():
    """
    The main function.
    """

    # Read the number of test cases.
    t = int(input())

    # Iterate through all test cases.
    for i in range(t):
        # Read n and k.
        n, k = map(int, input().split())

        # Solve the problem.
        answer = binary_cafe(n, k)

        # Print the answer.
        print(answer)


if __name__ == "__main__":
    main()
