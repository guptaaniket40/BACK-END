class Point:

    def __init__(self,x,y):
        print("Inint Called")
        self.x=x
        self.y=y
    def __str__(self):
        print("Str called")
        return"({0},{1})".format(self.x,self.y)
    def __sub_(self,obj):
        print("Sub Called")
        x=self.x-obj.x
        y=self.y-obj.y
        return Point(x,y)
p1=Point(30,40)
print(p1)

p2=Point(10,20)
print(p2)


print("Sub:",p1-p2)



        
