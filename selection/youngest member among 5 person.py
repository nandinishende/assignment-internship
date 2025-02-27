person1=int(input("enter age of person1:"))
person2=int(input("enter age of person2:"))         
person3=int(input("enter age of person3:"))
person4=int(input("enter age of person4:"))
person5=int(input("enter age of person5:")) 
if person1<person2 and person1<person3 and person1<person4 and person1<person5:
    print("person1 is youngest")
elif person2<person1 and person2<person3 and person2<person4 and person2<person5:
    print("person2 is youngest")    
elif person3<person1 and person3<person2 and person3<person4 and person3<person5:
    print("person3 is youngest")
elif person4<person1 and person4<person2 and person4<person3 and person4<person5:
    print("person4 is youngest")
elif person5<person1 and person5<person2 and person5<person3 and person5<person4:
    print("person5 is youngest")
else:
    print("write the different ages for all the persons")