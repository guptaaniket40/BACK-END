List1 = ['apple', 'banana', 'mango']
search = input("Enter a fruit to search: ")

for fruit in List1:
    if fruit == search:
        print(search, "is found in the list.")
        break
else:
    print(search, "is not found in the list.")
