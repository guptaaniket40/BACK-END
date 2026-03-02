 #Find Sum of List Elements
lst = [1, 2, 3, 4, 5]
print(sum(lst))

 #Find Largest Element in a List
lst = [10, 45, 23, 89, 12]
print(max(lst))

 #Find Smallest Element in a List
lst = [10, 45, 23, 89, 12]
print(min(lst))

 #Remove Duplicates from a List
lst = [1, 2, 2, 3, 4, 4, 5]
unique_list = list(set(lst))
print(unique_list)

 #Count Occurrence of an Element
lst = [1, 2, 3, 2, 4, 2]
print(lst.count(2))

 #Reverse a List
lst = [1, 2, 3, 4, 5]
lst.reverse()
print(lst)

 #Sort a List
lst = [5, 3, 1, 4, 2]
lst.sort()
print(lst)

 #Check if List is Empty
lst = []

if not lst:
    print("List is empty")
else:
    print("List is not empty")

 #Find Second Largest Number in a List
lst = [10, 20, 30, 40, 50]
lst = list(set(lst))
lst.sort()
print(lst[-2])

 # Merge Two Lists
list1 = [1, 2, 3]
list2 = [4, 5, 6]

merged_list = list1 + list2
print(merged_list)

 # Check if Element Exists in List
lst = [10, 20, 30, 40]

if 30 in lst:
    print("Found")
else:
    print("Not Found")


# reverse list without using slicing and reverse method use
lst = [1, 2, 3, 4, 5]
reversed_list = []

for item in lst:
  reversed_list.insert(0, item)

print(reversed_list)

