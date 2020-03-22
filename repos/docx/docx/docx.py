#90输出9*9乘法表
print(' | ',end='')
for k in range(1,10):
    print('{0:3d}'.format(k),end='')
print()#换行
print('_'*32)
for one in range(1,10):
    print(one,' | ',end='')
    for two in range(1,10):
        print('{0:3d}'.format(one*two),end='')
    print()
#产生随机数
'''random包括：1，random()随机产生0-1之间的数2，randint(a,b)随机产生a-b之间的数
    randrange(start,stop[,step])根据指定的范围，按step的递增步长来获取一个随机数
'''
9
import random
#for i in range(12):
text=0    
#print(random.randrange(2,40[,1]))
number=random.randint(0,100)
print(number)
while text!=number:
    text=int(input('输入1-100之间的数字，猜一猜!-->'))
    if text>number:
        print('你输入的数太大了！')
    elif text<number:
         print('你输入的数太小了！')
    else:
        print('恭喜你猜对了！')
print(eval('3*5'))
#请输入三个值，以逗号隔开
a,b,c=eval(input('请输入三个值，以逗号隔开:'))
print(a,'jjj')#python中输出想链接字符串只需用逗号隔开就行
result=3325
print(type(result))
print(bin(result))#bin(int)将十进制转换成2进制，并以0b为前缀
#oct(int)转换为8进制，以0o为前缀
#hex(int)转换成16进制，以0X为前缀
#int(s,base)将字符串根据base提供的进制数转换为十进制数值


#format的用法
number1=78
print(format(number1,'b'))#二进制输出
print(format(number1,'o'))#8进制输出
print(format(number1,'x'))#16进制输出
number2=53.02365
print(type(number2))
#python中的浮点数一共有三种类型float、complex、decimal
float()#输出0.0
float('nan')#输出nan,表明它非数字
print(float('Infinity'))#输出无穷大
print(float('-inf'))#输出负无穷大；
#python中重要词为import用来导入函数模块例如：import math#导入math模块math.isinf(a)用来判断a是否为无穷大
import sys
print(sys.float_info.epsilon)#获取支持的小树位数
    