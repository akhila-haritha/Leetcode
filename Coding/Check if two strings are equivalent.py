class Solution:
    def arrayStringsAreEqual(self, word1: List[str], word2: List[str]) -> bool:
        for i in word1:
            word3 = "".join(word1)
        for i in word2:
            word4 = "".join(word2)
        if word3==word4:
            return True
        return False
        
