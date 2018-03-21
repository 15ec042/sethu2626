def camel(string):
	x=string.split(' ')
	s='' 
	for i in range(len(x)):
		x[i]=x[i].capitalize()
		s+=x[i]+' '
	print(s)
def main():
  try:
    string=input()
    camel(string)
  except:
    print('invalid')
main()
