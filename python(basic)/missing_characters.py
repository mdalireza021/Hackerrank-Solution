import string
def missingCharacters(s):
  nums=[int(i) for i in range(10)]
  nums=list(map(str,nums))
  letters=[letter for letter in string.ascii_lowercase]
  value_nums=''
  value_letters=''
  for i in s:
    if i.isalpha()==True:
      value_letters+=i
    else:
      value_nums+=i


  temp_letters=''
  temp_nums=''
 
  for i in letters:
    if i not in value_letters:
      temp_letters+=i

  for i in nums:
    if i not in value_nums:
      temp_nums+=i

  return temp_nums+temp_letters
