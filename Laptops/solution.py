"""PROBLEM: http://codeforces.com/problemset/problem/456/A"""

n = int(input())

info = list()

for i  in range(n):
	info.append(list(map(int, input().split(" "))))

info.sort(key = lambda x: x[0])

alex = False

for i in range(n - 1):

	if(info[i][1] > info[i + 1][1]):
		alex = True
		break;

if alex:
	print("Happy Alex")
else:
	print("Poor Alex")