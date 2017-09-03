"""Problem: http://codeforces.com/contest/839/problem/B"""

rows, groups = list(map(int, input().strip().split(" ")))

number_soldiers = list(map(int, input().strip().split(" ")))

rows_whithout_four = rows
rows_whithout_two = rows * 2

val = True
remainders = [0, 0]

for soldiers in number_soldiers:

	while soldiers >= 3:

		if rows_whithout_four > 0:

			rows_whithout_four -= 1
			soldiers -= 4

		elif rows_whithout_two > 0:

			soldiers -= 2
			rows_whithout_two -= 1

		else:

			val = False

	if soldiers > 0:
		remainders[soldiers - 1] += 1

	if not val:
		break

one_sit = 0

while remainders[1] and val:

	if rows_whithout_two > 0:

		rows_whithout_two -= 1
		remainders[1] -= 1

	elif rows_whithout_four > 0:

		rows_whithout_four -= 1
		remainders[1] -= 1
		one_sit += 1

	elif one_sit >= 2:

		remainders[1] -= 1
		one_sit -= 2

	else:

		val = False

if remainders[0] > one_sit + rows_whithout_four * 2 + rows_whithout_two:

	val = False

if val:

	print("YES")

else:

	print("NO")