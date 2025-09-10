from collections import defaultdict

n = int(input())


count_x = defaultdict(int)
count_y = defaultdict(int)
count_xy = defaultdict(int)

result = 0

for _ in range(n):
    x, y = map(int, input().split())

    
    result += count_x[x]

    
    result += count_y[y]

    
    key = (x, y)
    result -= count_xy[key]

    
    count_x[x] += 1
    count_y[y] += 1
    count_xy[key] += 1

q
print(result)
