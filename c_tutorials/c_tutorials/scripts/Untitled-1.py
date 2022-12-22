class Solution:
    def romanToInt(self, s: str) -> int:
        n4 = s.count('IV')
        n9 = s.count('IX')
        n40 = s.count('XL')
        n90 = s.count('XC')
        n400 = s.count('CD')
        n900 = s.count('CM')

        n1 = s.count('I')
        n5 = s.count('V')
        n10 = s.count('X')
        n50 = s.count('L')
        n100 = s.count('C')
        n500 = s.count('D')
        n1000 = s.count('M')

        total_val = n4 * 4 + n9 * 9 + n40 * 40 + n90 * 90 + n400 * 400 + n900 * 900 + n1 + n5 * 5 + n10*10 + n50 * 50 + n100 * 100 + n500* 500 + n1000 * 1000 - 6 * n4 - 11 * n9 - 60 * n40 - 110 * n90 - 600 * n400 - 1100 * n900
        return total_val
        



        
        

        