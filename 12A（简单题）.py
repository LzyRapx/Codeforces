#coding:utf8
m = []
for i in range(3):
    m.append(raw_input())
m[2] = m[2][::-1] #将m的第三行倒序
if m[0] == m[2] and m[1][0]==m[1][2]:
    print 'YES'
else:
    print 'NO'
