rows = int(input("Enter the number of rows: "))
k = 1

for i in range(0, rows):
	for j in range(0, i):
		print(k, end=" ")
		k = k + 1
	print()