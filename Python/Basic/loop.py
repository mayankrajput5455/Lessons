# n =int(input("Enter a number: "))

# for i in range(1,11):
#     print(f"{n} X {i} = {n*i}")

# PRIME NO.
# n = int(input("Enter the no. : "))

# for i in range(2,n):
#     if(n%i)==0:
#         print("Number is not Prime")
#         break
# else:
#         print("Number is Prime")


# PATTERN PRINTING
n = int(input("Enter the number: "))
# for i in range(1,n+1):
#     print(" "* (n-i), end="")
#     print("*"* (2*i-1), end="")
#     print("")


# for i in range(1,n+1):
#     print("*"*i, end="")
#     print("")

for i in range(1,n+1):
    if(i==1 or i==n):
        print("*"*n, end="")
    else:
        print("*", end="")
        print(" "*(n-2),end="")
        print("*", end="")
    print("")