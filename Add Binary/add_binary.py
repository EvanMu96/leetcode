class Solution(object):
    def addBinary(self, a, b):
        """
        :type   a:  str
        :type   b:  str
        :rtype: str
        """
        return bin(int(a, 2) + int(b, 2))[2:]
# int(str, 进制)     其他进制转十进制
# hex() bin() 十进制转别的进制
