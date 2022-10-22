class A:
    def __init__(self,a) -> None:
        self.a = a
    def pr(self):
        print(self)
    @classmethod
    def prc(cls):
        print(cls(3))


if __name__ == "__main__":
    a=A(1)
    a.pr()
    A.prc()

