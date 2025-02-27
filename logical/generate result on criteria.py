pas=45
obtain=int(input("enter obtain marks:"))
total=int(input("enter total marks:"))
percentage=(obtain/total)*100
if percentage>=pas:
    print("you obtain",percentage,"%")
    print("you are pass")
else:
    print("you obtain",percentage,"%")
    print("you are fail")