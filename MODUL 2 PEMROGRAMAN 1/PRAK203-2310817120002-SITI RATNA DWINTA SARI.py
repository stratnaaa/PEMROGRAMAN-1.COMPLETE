#Input 1
a, b, i, j, x, y = map(float, input ().split())
output = (a-b) * (i/j) - (x+y)
print(f"{output:.3f}")

#Input 2
a, b = map(float, input ().split())
i, j = map(float, input ().split())
x, y = map(float, input ().split())
output = (a-b) * (i/j) - (x+y)
print(f"{output:.3f}")