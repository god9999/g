# Input string  
str = "Computers are useless. They can only give you answers"  
  
# Initialize dictionary  
dic = {}  
for char in str:  
   dic[char] = 0  
  
# Update char counts in the dictionary  
for char in str:  
   # char is used as the key  
   # and the value is the count  
   # of that char in the string  
   # Repeated chars hash to the  
   # same position  
   dic[char]+= 1  
  
# Print characters with count > 1  
for char, count in dic.items():  
   if count > 1 and char != ' ':  
      print "%c is repeated %d times" % (char, count) 
