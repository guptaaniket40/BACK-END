list=[1,2,3,4,5]
rev=[]
for i in range(len(list)-1,-1,-1):
    rev.append(list[i])
print(rev)


#check if list is sorted

list=[1,2,3,4,5]
is_sorted = True

for i in range(len(list)-1):
    if list[i] > list[i+1]:
        is_sorted=False
        break
print(is_sorted)



#Find second largest element
list=[10,20,4,45,99]
largest=second=float('-inf')

for num in list:
    if num>largest:
        second=largest
        largest=num
    elif num>second and num!=largest:
        second=num
print(second)


#find common element in two list
list1=[1,2,3,4]
list2=[3,4,5,6]
common=[]
for i in list1:
    if i in list2:
        common.append(i)
print(common)
