a = 'abcd'
s = list(a)
s[::2], s[1::2] = s[1::2], s[::2]
print(''.join(s))
