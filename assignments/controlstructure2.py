e=1001
bs=15000.00
al=6000.00
gs=ns=it=0
if bs <= 5000:
	it=0
elif bs >=5001 and bs <=10000:
	it=10/100
elif bs >=10001 and bs <=20000:
	it=20/100
else:
	it=30/100
	
  gs=bs+al
  ns=gs-it
  
print(e)
print(bs)
print(al)
print(gs)
print(ns)
print(it)
