from math import*

#Pedir límites inferior y superior
a= int(input("Límite Inferior:"))
while a<0:
	print ("No puede ser negativo")
	a=int(input("Límite inferior:"))

b=int(input("Límite" "Superior:"))
while b<a: 
	print("No puede ser menor que ",a)
	b=int(input("Límite" "Superior:"))

#Calcular el sumatorio de la raíz cuadrada de i para i entre a y b
s=0.0
for i in range(a, b+1):
		s+=sqrt(i)

#Mostrar resultado.
print ("Sumatorio de raíces")
print ("De {} a {} : {}".format(a,b,s))
