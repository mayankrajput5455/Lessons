class Employee:
    company = "ITC"
    name = "Mayank"
    salary = 1300000
    def show(self):
        print(f"The name of Employee is {self.name} and the salary is {self.salary}")

class Programmer(Employee): #ChildClass
    company = "ITC Infotech"
    language = "Python"
    def showLanguage(self):
        print(f"The name is {self.name} and he is good with {self.language} language")

a = Employee()
b = Programmer()

a.show()
b.showLanguage()