number=int(input("enter a number:"))    
if number>1:
    for i in range(2,number):
        if number%i==0:
            print("not a prime number")
            break
    else:
        print("prime number")