# create a class programmer for storing information of few programmers working at microsoft

class programmer:
    company="Microsoft"
    def __init__(self,name,product):
        self.name=name
        self.product=product

    def getdata(self):
        print(f"the name is {self.name} and the product is {self.product}")

abhi=programmer("abhi","web")
abhi.getdata()
