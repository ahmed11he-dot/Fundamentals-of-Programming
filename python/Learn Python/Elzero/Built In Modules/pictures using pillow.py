
from PIL import Image

myimage=Image.open(r"C:\Users\MF\OneDrive\Images\Saved Pictures\WhatsApp Image 2026-05-09 at 4.13.08 PM.jpeg")
myimage.show()

mybox=(0,0,100,100)
mynewimage=myimage.crop()
mynewimage.show()

myimage.convert("L")
mynewimage.show()