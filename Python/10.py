from itertools import *

def func(s):
  c = s.count('?')
  l = [i for i in product('01', repeat = c)]
  res = []
  for i in xrange(2**c):
    j=0
    t = ''
    for k in s:
      if k!='?':
        t+=k
      else:
        t+=l[i][j]
        j+=1
    res.append(t)
  return res
