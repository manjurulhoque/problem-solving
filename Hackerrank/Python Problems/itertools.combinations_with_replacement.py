import itertools

x, y = input().split()

out = list(itertools.combinations_with_replacement(sorted(x), int(y)))

for n in sorted(out):
    print(*n, sep='')