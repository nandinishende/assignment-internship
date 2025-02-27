num=int(input("enter a number:"))
rev=0
num1=num
while(num>0):
    rem=num%10
    rev=(rev*10)+rem
    num=num//10
if num1==rev:
    print("palindrome number")
else:
    print("not a palindrome number")