#3 integers in same line
#use map to separte, return a list
#int static_cast from string to int
f,n,t=map(int,input().split())	#
#declare array v with initial value 0
#size num2
ttl=0;v=[0]*n
# use colon after loop/condition to declare blocks
# for(int i=0;i<f;i++)
for i in range(f):
	#block indent sensitive
	c=input()	#getline
	for j in range (n):
		if c[j]=='Y':
			#no ++ in Python
			v[j]+=1;
			if v[j]>=t:
				ttl+=1
print(ttl)