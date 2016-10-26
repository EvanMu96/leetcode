class Solution(object):
    def getSum(self, a, b):
        """
        :type a:int
        :type b:int
        :rtype int
        """
        while b:
            result = (a^b)%0x10000000;
            cin = ((a&b)<<1)%0x10000000
            a, b = result, cin
        return a if a<= 0x7FFFFFFF else a | (-0x10000000+1)
# 这个题用Python做非常操蛋，因为Python的整形不是固定的32位数，因此要做一些特殊的处理，对整数取模0x10000000(Python的取模运算恒非负)
# 原理是希望该数的二进制表示从第32位开始到更高的位都是0，而0-31位模拟一个32位的类C语言int型
