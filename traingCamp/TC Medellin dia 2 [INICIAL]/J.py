def min_palindrome_operations(string):
    n = len(string)
    dp = [[0] * n for _ in range(n)]

    for i in range(n):
        dp[i][i] = 0

    for cl in range(2, n + 1):
        for i in range(n - cl + 1):
            j = i + cl - 1
            if string[i] == string[j]:
                dp[i][j] = dp[i + 1][j - 1]
            else:
                dp[i][j] = min(dp[i][j - 1], dp[i + 1][j]) + 1

    return dp[0][n - 1]

print(min_palindrome_operations("xxxx"))