N, K = map(int, input().split())
li = list(map(int, input().split()))
li.sort()
print(li[K - 1])
