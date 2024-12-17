#ques2
# import random

# def game():
#     print("You are playing the game...")
#     score = random.randint(1, 62)
#     #Fetch the hiscore
#     with open("hiscore.txt") as f:
#         hiscore = f.read()
#         if(hiscore!=""):
#             hiscore = int(hiscore)
#         else:
#             hiscore = 0
#     print(f"Your score: {score}")
#     if(score>hiscore):
#         with open("hiscore.txt", "w") as f:
#             f.write(str(score))
#     return score

# game()


#ques3

# def generateTable(n):
#     table = ""
#     for i in range(1,11):
#         table += f"{n} X {i} = {n*i}\n"

#     with open(f"tables/table_{n}.txt", "w") as f:
#         f.write(table)


# for i in range(2,21):
#     generateTable(i)


#OOP
#Ques1

# class Programmer:
#     company = "Microsoft"
#     def __init__(self, name, salary, pin):
#         self.name = name
#         self.salary = salary
#         self.pin = pin

# p = Programmer("Mayank", 1200000, 274001)
# print(p.name, p.salary, p.pin, p.company)
# r = Programmer("Rohan", 1300000, 254001)
# print(r.name, r.salary, r.pin, r.company)

#Oues2

# class calculator :
#     def __init__(self,n):
#         self.n = n

#     def square(self):
#         print(f"The Square is {self.n*self.n}")
#     def cube(self):
#         print(f"The Cube is {self.n*self.n*self.n}")
#     def squareroot(self):
#         print(f"The Squareroot is {self.n**1/2}")

# a = calculator(4)
# a.square()
# a.cube()
# a.squareroot()

#Ques5

# from random import randint
# class Train:

#     def __init__(self, trainNo):
#         self.trainNo = trainNo

#     def book(self, fro, to):
#         print(f"Ticket is booked in train no: {self.trainNo} from {fro} to {to}")

#     def getStatus(self):
#         print(f"Train no: {self.trainNo} is running on time")

#     def getFare(self, fro, to ):
#         print(f"Ticket fare in train no: {self.trainNo} from {fro} to {to} is {randint(222, 5555)}")

# t = Train(12399)
# t.book("Rampur", "Delhi")
# t.getStatus()
# t.getFare("Rampur", "Delhi")