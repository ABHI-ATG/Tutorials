# f = open('sample.txt','r')
f = open("abhi.txt")
data = f.read()
# data = f.readline()# read first line 
# data = f.readline()# read second line 
#data = f.read(5)#reads 5 characters of file


print(data)
f.close()


#
# modes of file
# r- read
# w- write
# a- append
#+- updating

# rb- for binfary 