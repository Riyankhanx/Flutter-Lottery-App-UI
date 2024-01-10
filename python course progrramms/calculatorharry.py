print("Enter value for first number")
a=int(input())
print("Enter value for second number")
b=int(input())
print("Enter the operators for calculation")
e = str(input())

if (e == "+"):
    print("The addition of first and second number is ",a+b)

elif(e == "-"):
    print("The subtrction of first and second number is ",a-b)

elif(e == "*"):
    print("The Multiplication of first and second number is ",a*b)
    
elif(e == "/"):
    print("The Division of first and second number is ",a/b)
else:
    print("You have entered incorrect operator please re type it again")

