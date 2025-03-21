p=int(input("Enter the principal amount: "))
interest=float(input("Enter the rate of interest: "))
y=int(input("Enter the number of years: "))
interest=interest/(12*100)
n=y*12
emi=(p*interest*(1+interest)**n)/((1+interest)**n-1)
print("The loan emi per month is: ",emi)
print("The total amount paid after",y,"years is: ",emi*n)
print("The total interest paid is: ",emi*n-p)
print("the number of months is: ",n)

