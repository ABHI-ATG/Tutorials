class person:
    country="Bharat"

class address(person):
    add="up"
class occupation(address):
    occ="businesman"

a=occupation()
print(a.occ)
print(a.add)
print(a.country)