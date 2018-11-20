#i am Sakib Hassan Nishat...code your own...

for x in range(eval(input())):
    a=list(map(int,input().split()))
    if a[0] != 0:
        print(len(str(a[0]**a[1])))
