def isPalindrome(s): 
    return s == s[::-1] 


t = int(input())
for i in range (0,t):
    string = input()
    ans = isPalindrome(string)
    if ans:
        print('-1')
    else :
        b = sorted(string)
        string = "".join(b)
        print(string)

