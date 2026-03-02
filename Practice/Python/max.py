nums=[3,6,1,6,7,4]
max_nums=nums[0]
for i in nums:
    if i>max_nums:
        max_nums= i
print(max_nums)        


nums=[3,6,1,6,7,4]
n=len(nums)

for i in range(n):
    for j in range(n-1):
        if nums[j]>nums[j+1]:
            nums[j],nums[j+1]= nums[j+1],nums[j]
print(nums)


nums=[3,6,1,6,7,4]
duplicate=-1
unique=[]
for i in nums:
    if i not in unique:
        unique.append(i)
    else:
        duplicate=i
    
print(unique)
print(duplicate)
        

      
 
