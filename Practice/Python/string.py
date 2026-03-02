arr = [1, 2, 4, 3, 3, 3]
freq = {}

for i in arr:
    freq[i] = freq.get(i, 0) + 1

print(freq)


arr = [1, 2, 4, 5,6]
n = len(arr)+1
print(n*(n+1)//2 - sum(arr))


a=[1,2,3,4]
b=[5,6,7,8]
n=a+b

for i in range(len(n)):
    for j in range(i+1,len(n)):
        if n[i]>n[j]:
            n[i],n[j]= n[j],n[i]
print(n)        





