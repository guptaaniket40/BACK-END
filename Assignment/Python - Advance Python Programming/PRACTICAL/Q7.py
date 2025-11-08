 # 
class Parent:
    def show_parent(self):
        print("This is the Parent class")

class Child(Parent):
    def show_child(self):
        print("This is the Child class")


 
class Father:
    def show_father(self):
        print("This is the Father class")

class Mother:
    def show_mother(self):
        print("This is the Mother class")

class Son(Father, Mother):
    def show_son(self):
        print("This is the Son class")



class Grandparent:
    def show_grandparent(self):
        print("This is the Grandparent class")

class Parent2(Grandparent):
    def show_parent2(self):
        print("This is the Parent2 class")

class Child2(Parent2):
    def show_child2(self):
        print("This is the Child2 class")


 
print("--- Single Inheritance ---")
c = Child()
c.show_parent()
c.show_child()

print("\n--- Multiple Inheritance ---")
s = Son()
s.show_father()
s.show_mother()
s.show_son()

print("\n--- Multilevel Inheritance ---")
c2 = Child2()
c2.show_grandparent()
c2.show_parent2()
c2.show_child2()
