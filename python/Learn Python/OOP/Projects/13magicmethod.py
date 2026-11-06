
class Book:
    def __init__(self,title,auther,new_pages):
        self.title=title
        self.auther=auther
        self.new_pages=new_pages

    def __str__(self):
        return f"{self.title} {self.auther}"

    def __eq__(self, other):
        return f"{self.new_pages == other.new_pages}"

    def __gt__(self, other):
        return f"{self.new_pages > other.new_pages}"    

    def __lt__(self, other):
        return f"{self.new_pages < other.new_pages}"

    def __add__(self, other):
        return f"{self.new_pages + other.new_pages}"
    def __getitem__(self, key):
                if key =="title":
                 return self.title
                elif key =="author":
                 return self.auther
                elif key =="new_pages":
                 return self.new_pages
                else:
                   0

    def __contains__(self, keyword):
        return keyword in self.title or keyword in self.auther    

book1=Book("Harrypotter","lora",340)
book2=Book("DSA using pyton","morgan",34)

print(book1 == book2)
print(book1 > book2)
print(book1 < book2)
print(book1 + book2)

print(book1["title"])
print("lora" in book1)