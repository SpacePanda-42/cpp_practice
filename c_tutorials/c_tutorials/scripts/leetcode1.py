from typing import List

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        prefix = ""
        if len(strs) == 1:
            return strs[0]

        for letter in range(len(strs[0])):
            for word in range(len(strs)):
                if letter <= len(strs[word])-1:
                    # print(letter)
                    if strs[0][letter] != strs[word][letter]:
                        return prefix
                else:
                    return prefix
            prefix = strs[0][:letter+1]
        return prefix
            
        
            



solution = Solution()
print(solution.longestCommonPrefix(["hello", "hello", "hello"]))

            


        
        

        