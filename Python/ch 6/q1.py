# spam detector

text=input("Enter the text\n")
if("make money" in text):
    spam=True
elif("congo" in text):
    spam=True
elif("sebscribe" in text):
    spam=True
elif("hurray" in text):
    spam=True
elif("hello" in text):
    spam=True
else:
    spam=False

if(spam):
    print("This is spam")
else:
    print("this is not spam")