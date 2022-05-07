class Solution:
    def capitalizeTitle(self, title: str) -> str:
        a=[]
        k=title.split()
        for i in range(len(k)):
            if len(k[i])>2:
                a.append(k[i].capitalize())
            else:
                a.append(k[i].lower())
        return " ".join(a)