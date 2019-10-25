line1 = input().split()
line2 = input().split()

qtd1 = int(line1[1])
qtd2 = int(line2[1])

valu1 = float(line1[2])
valu2 = float(line2[2])

payment = (qtd1*valu1) + (qtd2*valu2)
print('VALOR A PAGAR: R$ {:.2f}'.format(payment))