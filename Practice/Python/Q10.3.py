def is_odd(num):
    return num % 2 != 0

numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
result = list(filter(is_odd, numbers))
print(result)
