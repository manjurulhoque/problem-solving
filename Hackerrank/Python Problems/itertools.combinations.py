import itertools

x, y = input().split()

for i in range(1, int(y) + 1):
    out = list(itertools.combinations(sorted(x), i))

    for n in out:
        print(*n, sep='')