# constructor
class employee:
    def __init__(self,name,salary): # automatically will run 
        self.name=name
        self.salary=salary
        print("Employee is created")
    company="google"
    def getdetails(self):
        print(f"the name is {self.name}")
        print(f"the salary is {self.salary}")


harry=employee("abhi",100)
harry.getdetails()