e=1001
bs=15000.00
al=6000.00
gs=ns=it=0
if bs >= 10000:
	gs=bs+al
	ns=gs-(20/100)
else:
	gs=bs+al
	
print(e)
print(bs)
print(al)
print(gs)
print(ns)
