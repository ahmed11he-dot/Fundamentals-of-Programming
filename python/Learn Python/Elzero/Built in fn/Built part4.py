
# def formatText(text):
#     return f"- {text.strip().capitalize()} -"

myText=["ahmed","osama","elsayed"]



for tex in map(lambda text:f"- {text.strip().capitalize()} -",myText):
    print(tex)

