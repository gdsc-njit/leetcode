# Time: O(N)
# Space: O(N)

class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        re = []
        for i in range(1,n+1):
            s = str(i)
            if i % 3 == 0:
                s = "Fizz"
            if i % 5 == 0:
                if i % 3 == 0:
                    s += "Buzz"
                else:
                    s = "Buzz"
            re.append(s)
        return re
