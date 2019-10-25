values = input().split()
a = float(values[0])
b = float(values[1])
c = float(values[2])

pi  = 3.14159

print('TRIANGULO: {:.3f}'.format( (a*c)/2 ))
print('CIRCULO: {:.3f}'.format( (c**2)*pi ))
print('TRAPEZIO: {:.3f}'.format( (a+b)*c/2 ))
print('QUADRADO: {:.3f}'.format( b**2 ))
print('RETANGULO: {:.3f}'.format( a*b ))