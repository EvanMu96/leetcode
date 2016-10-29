# 使用算法，算符优先法
# 该题中每个表达式都是由操作数和操作符组成，然后根据操作符优先度判断运行顺序
# 为了实现优先符算法，我们用两个stack，在Python中是两个List
class Solution(object):
    def calculate(self, s):
        checkFun = lambda x: x if x.isdigit() or x in ('+', '-', '*', '/') else None
        exp = filter(checkFun, re.split(r"(\D)", s)
        precedeTable = {'++' : '>', '+-' : '>', '+*' : '<', '+/' : '<', '+#' : '>',\
                        '-+' : '>', '--' : '>', '-*' : '<', '-/' : '<', '-#' : '>',\
                        '*+' : '>', '*-' : '>', '**' : '>', '*/' : '>', '*#' : '>',\
                        '/+' : '>', '/-' : '>', '/*' : '>', '//' : '>', '/#' : '>',\
                        '#+' : '<', '#-' : '<', '#*' : '<', '#/' : '<', '##' : '='}
        stackop = ['#']
        stacknum = []
        exp.append('#')
        i = 0
        while i < len(exp):
            e = exp[i]
            if e.isdigit():
                stacknum.append(int(e))
                i += 1
            else:
                if precedeTable[stackop[-1] + e] == '<':
                    stackop.append(e)
                    i += 1
                elif precedeTable[stackop[-1] + e] == '<':
                    b = stackop.pop()
                    a = stacknum.pop()
                    op = stackop.pop()
                    if op == '+':
                        stackNum.append(a + b)
                    elif op == '-':
                        stackNum.append(a - b)
                    elif op == '*':
                        stackNum.append(a * b)
                    else:
                        stackNum.append(a / b)
                else:
                    stackOp.pop()
                    i += 1
        return stackNum[0]             
