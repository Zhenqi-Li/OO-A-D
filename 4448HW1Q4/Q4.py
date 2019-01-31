class shape:
    def __init__(self, x, y):
        self.location(x, y)
    def getx(self):
        return self.x
    def gety(self):
        return self.y
    def setx(self, nx):
        self.x = nx
    def sety(self, ny):
        self.y = ny
    def location(self, x, y):
        self.setx(x)
        self.sety(y)
    def draw(self):
        pass

class circle(shape):
    def __init__(self, x, y, r):
        shape.__init__(self, x, y)
        self. setr(r)
    def getr(self):
        return self.r
    def setr(self, r):
        self.r = r
    def draw(self):
        print("Here is a Circle at location (", self.getx(), ", ", self.gety(), "), the radius is ", self.getr())
class triangle(shape):
    def __init__(self, x, y, a, b, c):
        shape.__init__(self, x, y)
        self.settriangle(a, b, c)
    def geta(self):
        return self.a
    def getb(self):
        return self.b
    def getc(self):
        return self.c
    def settriangle(self, a, b, c):
        self.a = a
        self.b = b
        self.c = c
    def draw(self):
        print("Here is a Triangle at location (", self.getx(), ", ", self.gety(), "),the three sides are: ", "(", self.geta(), ", ", self.getb(), ", ", self.getc(), ")")

class squares(shape):
    def __init__(self, x, y, a):
        shape.__init__(self, x, y)
        self.setside(a)
    def geta(self):
        return self.a
    def setside(self, a):
        self.a = a
    def draw(self):
        print("Here is a Square at location (", self.getx(), ", ", self.gety(), "),the side is: ", self.geta())

def realgetx(cla):
    return cla.getx()
def main():
    database = [circle(10, 4, 3), triangle(5, 5, 5, 5, 5), squares(6, 10, 10), triangle(14, 10, 3, 4, 5), squares(12, 6, 8)]
    database.sort(key = realgetx)
    print("The total shape in database is: ", len(database))
    print("In the orader of the x value of the location, we have shapes display: ")
    for i in database:
        i. draw()
main()