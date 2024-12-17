# STONE PAPPER SCISSOR

import random

computer = random.choice([-1,0,1])
youstr = input("Enter your choice: ")
youDict = {"Stone": 1, "Paper":-1, "Scissor":0}
reverseDict = {1: "Stone", -1: "Paper", 0: "Scissor"}

you = youDict[youstr]

print(f"You Choose {reverseDict[you]}\nComputer choose {reverseDict[computer]}")

if(computer == you):
    print("Its a Draw")
else:
    if(computer ==-1 and  you ==1):
        print("You win!")
    elif(computer == -1 and you == 0):
        print("You Lose!")
    elif(computer == 1 and you == -1):
        print("You Lose!")
    elif(computer == 1 and you == 0):
        print("You Win!")
    elif(computer == 0 and you == -1):
        print("You Win!")
    elif(computer == 0 and you == 1):
        print("You Loss!")
    else:
        print("Somethung went wrong")