class Solution:
    def arraySign(self, nums: List[int]) -> int:
      if 0 in nums:
        return 0
      else:
        k = len(list(filter( lambda x : x < 0, nums)))
        if k%2 == 0:
          return 1
        else :
          return -1