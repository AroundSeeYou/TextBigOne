def add(x, y):#def用于声明一个函数
    return x+y
print(add(23.012,86.326))

def foo():
    print('from foo')
foo()#函数作为一个对象，拥有对象属性的三个特性：id、类型、值 
print(id(foo))
print(type(foo))
print(foo)

def f1():
    def f2():#嵌套在f1函数下的f2函数
        print('from f2')
        def f3():
            print('from f3')
        f3()
    f2()

f1()#调用f1函数



def get(x):
    def clean(t):   #嵌套在get函数内的clean函数
        a = t*2 
        return a 
    new_x = clean(x)  #在get函数内调用clean函数
    return new_x

print(get(5))

#多项式s = 1 + 2*x + y^2 + z*y
def polynomial(x,y,z):
    s = 1 + 2*x + y*y + z*y
    return s
#按位置输入
print(polynomial(1,2,3))

def polynomial(x,y,z):
    s = 1 + 2*x + y*y*8 + z*y
    return s
#关键词
print(polynomial(x=1,y=2,z=3))

polynomial = lambda x,y,z:1 + 2*x + y*y + z*y
print(polynomial(1,2,3))

def f(x):#将序列中各元素平方
    return x*x
print (list(map(f, [1, 2, 3, 4, 5, 6, 7, 8, 9,10])))

#将单词首字母大写
def format_name(s):
    s1=s[0:1].upper()+s[1:].lower();
    return s1;
print(list(map(format_name, ['adam', 'LISA', 'barT']))) 

