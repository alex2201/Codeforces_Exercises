"""PROBLEM: http://codeforces.com/gym/101498/problem/A"""

num_cases = int(input())

while(num_cases > 0):

	number_channels = int(input())

	info_channels = {}
	frecuencies = list()

	while(number_channels > 0):

		name, frecuency = input().split(" ")
		frecuency = int(frecuency)

		try:
			info_channels[frecuency] += 1
		except KeyError:
			info_channels[frecuency] = 1
		
		number_channels -= 1

	max_channels = 0
	frecuency = 0

	for info in info_channels:
		if info_channels[info] > max_channels:
			max_channels = info_channels[info]
			frecuency = info
			frecuencies = [int(info)]
		elif info_channels[info] == max_channels:
			frecuencies.append(int(info))

	if len(frecuencies) > 1:
		frecuencies.sort()
		print(frecuencies[0])
	else:
		print(frecuency)

	num_cases -= 1