import sys
import os
import urllib.request
from bs4 import BeautifulSoup

url = input("URL: ").strip()
req = urllib.request.Request(url)
response = urllib.request.urlopen(req)
html = response.read()

soup = BeautifulSoup(html, 'html.parser')

problem = soup.find(class_="title").get_text().split(".")[1].strip()

try:

	os.mkdir(problem)

except FileExistsError:

	print("Ya se ha agregado el problema.")
	exit()

solutionFile = open(problem + "/solution.cpp", "w")

text = "/*PROBLEM: " + url + "*/\n\n"

text += """#include <iostream>\n\nusing namespace std;\n\nint main(){\n\tstd::ios::sync_with_stdio(false);
\n\n\treturn 0;\n}"""

solutionFile.write(text)

solutionFile.close()

inputFile = open(problem + "/input.txt", "w")

input_ = str(soup.find("pre")).split("<br/>")

inputTxt = ""

for element in input_:
	inputTxt += element.strip("</pre>") + "\n"
	inputTxt

inputFile.write(inputTxt.strip())

inputFile.close()

print("Finalizado con éxito.")