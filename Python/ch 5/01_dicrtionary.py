my_dictionary={
    "my_name":"abhi",
    "my_age":"19",
    "numbers":[1,2,3,4],
    "anotherdict":{'abhi':'atg'}
    }

print(my_dictionary['my_name'])
print(my_dictionary['my_age'])

print(my_dictionary['anotherdict']['abhi'])

#can be changed
my_dictionary['my_age']=[1,2]
print(my_dictionary['my_age'])

#methods
print(my_dictionary.keys())

print(type(my_dictionary.keys()))#dict_keys
#class of above dictionary is dict_keys which can be changed into list as given below
print(list(my_dictionary.keys()))

#print the keys of dictionary
print(my_dictionary.values())

#
print(my_dictionary.items())

#update
update_dict={
    "123":"456"
}
my_dictionary.update(update_dict)
print(my_dictionary)

#
print(my_dictionary.get("my_name"))
print(my_dictionary["my_name"])#throws an error if my_name is not present in the dictionary







