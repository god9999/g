employee_id = 1001
basic_salary = 15000.00
allowances=6000.00
bill_amount = 0.0
gross_salary=0
net_salary
print("Bill Id: %d" %bill_id)
print("Customer Id: %d" %customer_id)
print("Bill Amount:Rs. %f" %bill_amount)
if bill_amount <5000:
	income_tax=0
elif ((bill_amount >=5001) and (bill_amount <=10000):
	income_tax=0.1
elif ((bill_amount >=10001) and (bill_amount <=20000)):
	income_tax=0.2
elif bill_amont>20000:
	income_tax=0.3
else:
	income_tax=0
gross_salary=basic_salary+allowances
net_salary=gross_salary-income_tax
print(employee_id)
print(basic_salary)
print(allowances)
print(gross_salary)
print(income_tax)
