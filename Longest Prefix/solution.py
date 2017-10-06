"""PROBLEM: http://codeforces.com/gym/101498/problem/B"""

from sys import stdin, stdout

number_cases = int(stdin.readline())

while number_cases > 0:

	cad1, cad2 = stdin.readline().strip().split(" ")
	ocurrencies = [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
	reference = ord("a")
	len_prefix = 0

	for letter in cad2:
		ocurrencies[ord(letter) - reference] += 1

	for letter in cad1:

		index = ord(letter) - reference

		if ocurrencies[index] > 0:
			ocurrencies[index] -= 1
			len_prefix += 1
		else:
			break

	stdout.write(str(len_prefix) + "\n")
	
	number_cases -= 1