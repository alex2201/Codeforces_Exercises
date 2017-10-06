"""PROBLEM: http://codeforces.com/problemset/problem/276/A"""

number_restaurants, time_lunch = list(map(int, input().split(" ")))

max_joy = 0

for i in range(number_restaurants):

	joy, time = list(map(int, input().split(" ")))

	if time > time_lunch:
		joy = joy - (time - time_lunch)

	if joy > max_joy:
		max_joy = joy
	elif max_joy == 0:
		max_joy = joy

print(max_joy)