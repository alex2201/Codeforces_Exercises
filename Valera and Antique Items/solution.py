"""Problem: http://codeforces.com/problemset/problem/441/A"""

n, v = list(map(int, input().strip().split(" ")))

sellers = list()

for i in range(0, n):

	items = list(map(int, input().strip().split(" ")))[1:]

	for item in items:
		if item < v:
			sellers.append(i + 1)
			break


number_sellers = len(sellers)

print(number_sellers)

if number_sellers > 0:
	print(*sellers, sep=" ")