# 用到的算法 快速幂
# 利用位运算实现快速求某个数的多少次幂
class Solution(object):
    def superPow(self, a, b):
        ans, pow = 1 ,a
        # 用切片特性倒置数组
        for n in b[::-1]:
            ans = (ans * (pow ** n) % 1337) % 1337
            pow = (pow ** 10) % 1337
        return ans

# 智障了，忘了python里**就是power，一开始还写了个Power函数
