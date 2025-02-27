attendace=75
attendace=int(input("Enter the number class that attend: "))
total=int(input("Enter the total number of class: "))
percentage=(attendace/total)*100
if percentage>=attendace:
    print("You are eligible for the exam")
else:
    print("You are not eligible for the exam")