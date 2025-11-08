# Method Overloading (achieved using default arguments)
class MathOps:
    def add(self, a=None, b=None, c=None):
        if a is not None and b is not None and c is not None:
            return a + b + c
        elif a is not None and b is not None:
            return a + b
        elif a is not None:
            return a
        else:
            return 0


# Method Overriding (child class overrides parent class method)
class Parent:
    def show(self):
        print("This is the parent class method")

class Child(Parent):
    def show(self):
        print("This is the child class method")


# Demonstration
print("--- Method Overloading ---")
m = MathOps()
print(m.add(5, 10))
print(m.add(2, 3, 4))

print("\n--- Method Overriding ---")
c = Child()
c.show()
