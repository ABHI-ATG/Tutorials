class employee:
    salary=100
    name="abhi"
    
    # def change_salary(self,sal):
    #     self.salary=sal

    # def change_salary(self,sal):
    #     self.__class__.salary=sal

    @classmethod  # which directly related to class not to the object 
    def change_salary(cls,sal):
        cls.salary=sal

e=employee()
print(e.salary)
e.change_salary(200)
print(e.salary)