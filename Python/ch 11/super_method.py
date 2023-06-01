class a:
    def __init__(self):
        print("inititalising content")
    def super_test(self):
        print("google")
class b(a):
    def __init__(self):
        super().__init__()
        print("inititalising person")
    def super_test(self):
        super().super_test()
        print("apple")
class c(b):
    def super_test(self):
        super().super_test()
        print("microsoft")

d=c()
d.super_test()

# test=b()
# test.__init__()