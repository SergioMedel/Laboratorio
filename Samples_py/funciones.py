def suma(a_,b_):
    return a_ + b_

otraSuma = lambda x, y: x + y

print(suma(5,10))
print(otraSuma(5,10))


def cambiarValor(num_):
    num_ = 5

def cambiarValorLista(list_, position_, value_):
    list_[position_] = value_

myNum = 10
cambiarValor(myNum)
print(myNum)


myList = [i for i in range(0,10)]
print(myList)

cambiarValorLista(myList, 4, 100)
print(myList)