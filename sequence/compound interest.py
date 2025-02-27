principal=int(input("enter principal amount:"))
rate=int(input("enter rate of interest:"))
time=int(input("enter time period:"))
A=principal*(1+rate/100)**time
CI=A-principal
print("the final amount is:",CI)
