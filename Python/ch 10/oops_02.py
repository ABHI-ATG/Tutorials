#attributes
# class attributes
# instance variable attributes


class employee:
    company="google"

harry=employee()
print(harry.company)

abhi=employee()
abhi.company="youtube"
print(abhi.company)

atg=employee()
employee.company="amazon"
print(atg.company)