values = input().split()
a = int(values[0])
b = int(values[1])
c = int(values[2])

if a > b and a > c:
    print("{} eh o maior".format(a))
elif b > a and b > c:
    print("{} eh o maior".format(b))
else:
    print("{} eh o maior".format(c))
 

