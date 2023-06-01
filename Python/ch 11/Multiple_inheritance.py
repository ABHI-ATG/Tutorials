class freelancer:
    company="freelancer"
class employee:
    company="fb"

class programmer(freelancer,employee):
    name="rohit-man"

e=programmer()
print(e.name)
print(e.company)

test=employee()