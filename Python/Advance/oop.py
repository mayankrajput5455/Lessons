class Employee:
    language = "Python"
    salary = 1200000

    def __init__(self):#dunder method which is automatically call without calling
        print("I am Creating an Object")

    def getInfo(self): #self parameter.
        print(f"The language is {self.language}. The salary is {self.salary}")
#OR Static Method
    @staticmethod
    def greet():
        print("Good Morning")
mayank = Employee()
mayank.salary = 1300000
# print(mayank.language, mayank.salary)
mayank.greet()
mayank.getInfo()

 