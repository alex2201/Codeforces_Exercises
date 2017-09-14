"""Problem: http://codeforces.com/problemset/problem/385/A"""

n, c = list(map(int, input().split(" ")))

price_per_day = list(map(int, input().split(" ")))

profit = 0

for i in range(0, n - 1):
	
	earned = price_per_day[i] - price_per_day[i + 1] - c

	if earned > profit:
		profit = earned

if profit <= 0:
	print(0)
else:
	print(profit)