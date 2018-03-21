a = 26
def function(st):
    global a
    l = len(st)
    counter = [0] * a
     
    for i in range(l // 2):
        counter[ord(st[i]) - ord('a')] += 1
         
    for i in range(l // 2, l):
        counter[ord(st[i]) - ord('a')] -= 1
         
    for i in range(MAX):
        if (counter[i] != 0):
            return True
             
    return False
st = "abcasdsabcae"
if function(st): 
    print("Yes, both halves differ by at ",
          "least one character")
else:
    print("No, both halves do not differ at all")
