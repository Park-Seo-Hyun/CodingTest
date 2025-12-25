import math

def solution(n):
    if (n < 1 or n > 100): return
    sum = 0
    if (n % 2 == 0):
        num = 2
        while(num <= n):
            sum += int(math.pow(num, 2))
            num += 2
    else:
        num = 1
        while(num <= n):
            sum += num
            num += 2
    return sum