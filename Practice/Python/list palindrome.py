#palindrome check

lst = [1, 2, 3, 2, 1,4]

if lst == lst[::-1]:
    print("Palindrome")
else:
    print("not palindrome")


#sum of list
    
lst = [1, 2, 3, 4]
sum = 0

for i in lst:
     sum += i

print(sum)

#even odd  
lst = [1, 2, 3, 4, 5]
even = [x for x in lst if  x % 2 == 0]
print(even)

#Fibonacci series
n = 6
a, b = 0, 1

for i in range(n):
    print(a, end=" ")
    a, b = b, a + b


#prime number check
n= int(input("enter a  number:"))
is_prime = True

if n <= 1:
    is_prime = False
else:
    for i in range(2, n):
        if n % i == 0:
            is_prime = False
            break

print(is_prime)

#remove duplicate in list
lst = [1, 2, 2, 3, 4, 4]
print(list(set(lst)))

 # Swap two numbers (without temp variable)
a, b = 10, 20
a, b = b, a
print(a, b)

 
 # Check anagram
s1 = "listen"
s2 = "silent"

print(sorted(s1) == sorted(s2))


#factorial number calculate
num = int(input("Enter a number: "))
fact = 1

for i in range(1, num + 1):
    fact *= i

print("Factorial:", fact)


#even odd
num = int(input("Enter a number: "))

if num % 2 == 0:
    print("Even")
else:
    print("Odd")





