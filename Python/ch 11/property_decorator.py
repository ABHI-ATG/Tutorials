class employee:
    company="nikola tesla"
    salary=100
    salary_bonus=50

    @property
    def total_salary(self):
        return self.salary+self.salary_bonus

    @total_salary.setter
    def total_salary(self,val):
        self.salary_bonus=val-self.salary

e=employee()
print(e.total_salary)
e.total_salary=200
print(e.salary)
print(e.salary_bonus)