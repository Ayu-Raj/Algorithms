roman = {1: 'I', 4: 'IV', 5: 'V', 9: 'IX',
         10: 'X', 40: 'XL', 50: 'L', 90: 'XC', 100: 'C', 400: 'CD', 500: 'D', 900: 'CM', 1000: 'M'}
arr = [1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1]
ip = int(input())
l = []
while(ip != 0):
    for i in arr:
        temp = ip//i
        if(temp > 0):
            print(l)
            l.append(roman[i])
            ip = ip-i
            break
print(l)

# n = int(input())

# unit = {
#     1000: 'M',
#     900: 'CM',
#     500: 'D',
#     400: 'CD',
#     100: 'C',
#     90 : 'XC',
#     50: 'L',
#     40: 'XL',
#     10: 'X',
#     9: 'IX',
#     5: 'V',
#     4: 'IV',
#     1: 'I'
# }

# roman = ''

# for r in unit.keys():
#     x = n // r
#     roman += unit[r] * x
#     n -= (r * x)
#     if n <= 0: break
# print(roman)
