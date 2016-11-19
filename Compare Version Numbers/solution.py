class Solution:
    # @param a, a string
    # @param b, a string
    # @return a boolean
    def compareVersion(self, version1, version2):
        v1list = version1.split(".")
        v2list = version2.split(".")
        len1 = len(v1list)
        len2 = len(v2list)
        # 比较两个List的长度
        lenMax = max(len1, len2)
        for x in range(lenMax):
            v1Token = 0
            if x < len1:
                v1Token = int(v1list[x])
            v2Token = 0
            if x < len2:
                v2Token = int(v2list[x])
            if v1Token < v2Token:
                return -1
            if v1Token > v2Token:
                return 1
        return 0
