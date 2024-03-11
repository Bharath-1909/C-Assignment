def polindrome(s):
	if(s==s[::-1]):
	return "the string is polindrome"
	else:
	return "the string is not a polindrome."
s=input("enter the string")
print(polindrome(s))
