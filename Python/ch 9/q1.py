# file I/O question - to find weather the twinkle is present or not 

f=open("twinkle.txt",'r')
t=f.read()
if 'twinkle' in t:
    print("twinkle is present")
else:
    print("twinkle is not present")
f.close()