import itertools

x = list(map(int, input().split()))
y = map(int, input().split())

for i in list(itertools.product(x, y)):
    print(i, end=" ")