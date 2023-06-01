# set: is a collection of non-repeated element

a={1,2,3,4,5}
print(a)
print(type(a))

#
c={1,1,2}
print(c)#repeated value will not print

b={}
print(type(b))#it  is empty dictionary not a set

#an empty set can be created with below syntax
d=set()
print(d)

#add
d.add(4)
print(d)
d={1,23,3,5,6,7}
#list can be added in a set 
# d.add([1,23,3])

#dictionary can be added in a set
#  d.add({1:2})

# tuples can be added

#sets can be changed

print(len(d))

print(d.remove(1))





