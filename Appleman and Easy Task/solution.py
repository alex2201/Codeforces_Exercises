"""Problem: http://codeforces.com/problemset/problem/462/A"""

lines = int(input())

board = []
val = True

for i in range(0, lines):

	row = input().strip()
	board.append(row)

for i in range(0,lines):

	adjacent = 0

	for j in range(0, lines):

		if i < lines - 1:

			if board[i + 1][j] == 'o':
				adjacent += 1

		if i > 0:

			if board[i - 1][j] == 'o':
				adjacent += 1

		if j < lines - 1:

			if board[i][j + 1] == 'o':
				adjacent += 1

		if j > 0:

			if board[i][j - 1] == 'o':
				adjacent += 1
		
		if adjacent % 2 != 0:

			val = False
			break

if val:
	print("YES")
else:
	print("NO")