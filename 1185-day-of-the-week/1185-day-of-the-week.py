import calendar
class Solution:
    def dayOfTheWeek(self, day: int, month: int, year: int) -> str:
        ans=["Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"]
        return ans[calendar.weekday(year,month,day)]