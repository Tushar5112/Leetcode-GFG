class Codec:
    def __init__(self):
        self.map = dict()
        
        
    def encode(self, longUrl: str) -> str:
        """Encodes a URL to a shortened URL.
        """
        key=hash(longUrl)
        self.map[key]=longUrl
        return(f"http://tinyurl.com/{key}")
        

    def decode(self, shortUrl: str) -> str:
        """Decodes a shortened URL to its original URL.
        """
        parts=shortUrl.split('/')
        key=parts[-1]
        return(self.map[int(key)])
        
        

# Your Codec object will be instantiated and called as such:
# codec = Codec()
# codec.decode(codec.encode(url))
       