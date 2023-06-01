#q2 - replace 

with open("abhi.txt") as f:
    content = f.read()
content=content.replace("content","text")

print(content)
# with open('abhi.txt','w') as f:
#     f.write(content)