def even_numbers():
    for i in range(2, 21, 2):
        yield i

for num in even_numbers():
    print(num)
