
class rectangle:
    def __init__(self,width,height):
        self._width=width
        self._height=height

    @property
    def width(self):
        return f"{self._width:.1f}"

    @property
    def height(self):
         return f"{self._height:.1f}"
    
    @width.setter
    def width(self,new_width):
        if new_width > 0:
         self._width=new_width
        else:
            print("new width must be greater than 0")

    @height.setter
    def height(self,new_height):
            if new_height > 0:
              self._height=new_height
            else:
                print("new height must be greater than 0")

    @width.deleter
    def width(self):
     del self._width
     print("new width was deleted")

    @height.deleter
    def height(self):
          del self._height
          print("new width was deleted")
Rectangle=rectangle(3,5)

print(Rectangle.width) # => 3
print(Rectangle.height) # => 5

print(Rectangle._width) # => 3.0
print(Rectangle._height) # => 5.0

# Rectangle.width=-1
# Rectangle.height=0

# del Rectangle.width 
# del Rectangle.height
