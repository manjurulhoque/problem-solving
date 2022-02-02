import itertools
from os import sep

x, y = input().split()

out = list(itertools.permutations(x, int(y)))

for n in sorted(out):
    print(*n, sep='')