print(1 > 2 and 1 > 0)
print(1 > 2 or 1 > 0)
print(5!=6)
print(1==2)
print(1!=2)
print(not '')

hp=30
while hp>20:
    hp=hp-1
    print(hp)
HP = [110,103,103,75,85,105,50,75,105,120,75,45,55,75]
HP_new = []#新列表存储乘以2后的数
for q in HP:
    if not q%2:
        HP_new.append(q*2-9)
    else:
        HP_new.append(q)
print(HP)
print(HP_new)

for i in range(3):
   print("-----%d-----" %i)
   if(i<2):
       print("hello!")
       continue
for j in 'python':
    if(j=='h'):
        pass
        print('这是pass')
    print('当前字母：'+j)
s=[]
for w in range(1,10):
    s.append(w**2)
print(s)
{i:j for i,j in enumerate(["a","b","c"])}
print(j)
#t = (x ** 2 for x in range(10))#推导式是一种非常好看的代码风格，但是对于理解代码并不是十分友好。所以在实际编写的时候，推导式尽量不使用多重嵌套的方式
#print(t)
f = open('abc.txt')#不会自己关闭
content=f.read(5)
print(content)
f.close()
with open('abc.txt') as f:#自己可以关闭
    c=f.read()
    print(c)



import csv #导入CSV模块//csv类似于Excel文本
path = 'aaa.csv'#路径
f = open(path,'r',encoding='UTF-8') #打开CSV文件
reader = csv.reader(f) #读取CSV文件数据
content=[]
for con in reader:
    content.append(con)
f.close #关闭文件
print(content[0])
print(content[1])
print(content[2])


import csv
path = 'Pokemon_write.csv'
#写入Pokemon前两行数据
content = [['bhv','mkij','mlm','lpl'],['#', 'Name', 'Type 1', 'Type 2', 'Total', 'HP', 'Attack', 'Defense', 'Sp. Atk', 'Sp. Def', 'Speed', 'Generation', 'Legendary'],['1', 'Bulbasaur', 'Grass', 'Poison', '318', '45', '49', '49', '65', '65', '45', '1', 'False']]
f = open (path,'w') #打开文件
writer = csv.writer(f)
for con in content:
    writer.writerow(con) #写入数据
f.close()

import pickle  
f1 = open('pickle.txt','wb')  
d = {'class':'数据酷客','evaluate':'good'}  
pickle.dump(d,f1)  #将数据通过特殊的形式转换为只有python语言认识的字符串，并写入文件
f1.close()

import pickle
read_file = open('pickle.txt','rb')
data = pickle.load(read_file)#从数据文件中读取数据，并转换为python的数据结构
print(data)
read_file.close()

import shelve
firm1 = dict(zip(['class','function'],['数据酷客','数据科学']))
firm2 = dict(zip(['class','function'],['教学','视频']))
db = shelve.open('shelveDict')#打开一个文件
db['firm1']=firm1#向文件中添加内容，添加方式和字典的添加键值对相同
db['firm2']=firm2
db.close#关闭文件

db = shelve.open('shelveDict')#打开文件
print(db['firm1'])#像从字典中获取键的方式一样读取内容
print(db['firm2'])
db.close()

db = shelve.open('shelveDict')#打开文件
firm2 = db['firm2']#从文件中读取之前存储的对象
firm2['class'] = 'education '#直接对对象进行修改
db['firm2'] = firm2#重新存储至字典文件对象中
print(db['firm2'])
db.close()


#导入模块
import sqlite3   
#连接数据库，如果不存在就自动创建一个，如果存在的话，就打开那个数据库
conn = sqlite3.connect('example17.db')
#创建一个Cusor对象，并调用Cursor对象的execute方法来执行SQL语句
c = conn.cursor()

c.execute('''CREATE TABLE stocks(date real,event text,place text)''') #向表中插入数据
c.execute('''insert into stocks values('2008','奥运会','北京')''')
conn.commit()#提交当前事务，保存数据
conn.close()#关闭数据库连接


#由于刚才已经关闭了数据库连接，需要重新创建Connection对象和Cursor对象
conn = sqlite3.connect('example17.db')
c = conn.execute('''select * from stocks''')
print(c)
print(list(c))#数据成功提取出来了



      
       
     
    

#del seq[42:] #删除序列切片
