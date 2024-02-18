class TimeMap(object):

    def __init__(self):
        self.map={}
    # def test(self,a):
    #   return self.map.get(a,"Cannot find")
    def getTimestamp(self,tup):
      return tup[0]
    def set(self, key, value, timestamp):
        """
        :type key: str
        :type value: str
        :type timestamp: int
        :rtype: None
        """
        arr=self.map.get(key,[])
        # arr.append((timestamp,value))
        # arr.sort(key=self.getTimestamp)
        # self.map[key]=arr
        arr.append((timestamp,value))
        self.map[key]=arr
        
        

    def get(self, key, timestamp):
        """
        :type key: str
        :type timestamp: int
        :rtype: str
        """
        arr=self.map.get(key,"")
        if(arr==""):
          return arr
        #there is value for the given key.
        # Use binary serarch to get the timestamp
        left=0
        right=len(arr)-1
        temp=right
        while left<=right:
          midIndex=(right+left)//2
          temp=midIndex
          if(arr[midIndex][0]==timestamp):
            return arr[midIndex][1]
          if timestamp<arr[midIndex][0]:
            right=midIndex-1
          elif timestamp>arr[midIndex][0]:
            left=midIndex+1
        #There is no such timestamp.So,give biggest timestamp(The last item in the arr)
        if(arr[temp][0]>timestamp):
          if(temp==0):
            return ""
          return arr[temp-1][1]
        return arr[temp][1]
        


# Your TimeMap object will be instantiated and called as such:
# obj = TimeMap()
# obj.set(key,value,timestamp)
# param_2 = obj.get(key,timestamp)

timeMap=TimeMap()
timeMap.set("love","high",10)
timeMap.set("love","low",20)
a=timeMap.get("love",5)
print(a)
# timeMap.set("foo","bar",1)
# a=timeMap.get("foo",1)
# print(a)
# b=timeMap.get("foo",3)
# print(b)
# timeMap.set("foo", "bar2", 4)
# c=timeMap.get("foo", 4)
# print(c)
# d=timeMap.get("foo", 5)
# print(d)