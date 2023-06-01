#list 
a=[1,2,3,4,5,6]
print(a)

#acess as below
print(a[1])

#can be changed
a[3]=23
print(a[3])

#we can create the list of different types
a=[2,3.4,'abhi']
print(a)

#list slicing
friends=['abhi',1021,'singahal','atg']
print(friends[-5:])

#list sort
l1=[8,2,9,4,5]
l1.sort()
print(l1)

#reverse
l1.reverse()
print(l1)

#append
l1.append(3)#will add number at last 
print(l1)

#insert
# l1.insert(index, object)
l1.insert(2, 7)
print(l1)


a=[5,3,3,7,3,8,2,6]
print(a)
#pop
# a.pop(1)#will remove 4 indices element 
print(a)

#remove
a.remove(3)
print(a)