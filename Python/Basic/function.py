# def avg():
#     a = int(input("Enter a:"))
#     b = int(input("Enter b:"))
#     c = int(input("Enter c:"))
#     average = (a+b+c)/3
#     print(average)

# avg()

# def goodDay(name, ending):
#     print("Good day, " + name)
#     print(ending)

# goodDay("Mayank" , "Thank you")
# goodDay("Ayush" , "Thank you")
# goodDay("Akash" , "Dhanyawad")



# def f_to_c(f):
#     return  5*(f-32)/9

# f = int(input("Enter temp in F: "))

# c = f_to_c(f)
# print(f"{round(c,2)}°C")



def rem(l, word):
    n=[]
    for item in l:
        if not(item == word):
            n.append(item.strip(word))
    return n
    
l =["Mayank", "Ayush", "Aryan", "ya"]

print(rem(l, "ya"))