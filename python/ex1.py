import sys


class A:
    pass
class B(A):
    pass

a=A()
b=B()

print type(A),type(B)
print type(a), type(b)

class C(object):
    pass

class D(C):
    pass

c=C()
d=D()
print type(C), type(D)
print type(c),type(d)
