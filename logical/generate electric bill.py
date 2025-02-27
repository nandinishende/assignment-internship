consume=int(input("enter the consume unit in KW:"))
if consume<=50:
    cost=consume*1
    print("cost of electricity bill is:",cost)
elif consume<=150:
    cost=50+(consume-50)*2.50
    print("cost of electricity bill is:",cost)
elif consume<=250:
    cost=50+100+(consume-150)*4
    print("cost of electricity bill is:",cost)
else:
    cost=50+100+400+(consume-250)*6
    print("cost of electricity bill is:",cost)