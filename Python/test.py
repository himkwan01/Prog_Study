temp, down, distance = map(int, input().split()) '''mutli int var at same line'''
day=1
print(temp, down, distance)
while(temp<distance):
    day=day+1
    temp+=down
print(day)
