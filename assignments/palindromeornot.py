string_1=str(input("enter the first string"))

rev_str = reversed(string_1)

if (list(string_1) == list(rev_str)):
	print("Palindrome")
else:
	print("not a palindrome")
