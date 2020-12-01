class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        r=0
        l=0
        while(r<len(nums)):
            if nums[r]==0:
                r+=1
            else:
                k=nums[r]
                nums[r]=nums[l]
                nums[l]=k
                r+=1
                l+=1
                
