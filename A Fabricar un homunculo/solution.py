n = int(raw_input())
materials = raw_input().split(" ")
haveM = {}

for material in materials:
	haveM[int(material)] = 1

m = int(raw_input())

while m > 0:
	mat = int(raw_input())

	if mat in haveM:
		print "SI"
	else:
		print "NO"

	m -= 1