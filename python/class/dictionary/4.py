# Combine two dictionary by adding values for common keys.
# Example: Input: d1 = {'a': 100, 'b': 200, 'c':300}
#  d2 = {'a': 300, 'b': 200, 'd':400}
# Output: {'a': 400, 'b': 400, 'd': 400, 'c': 300}


d1={'a':100,'b':200,'c':300}
d2={'a':300,'b':200,'d':400}
d3={}
for i,i1 in d1.items():
    for j,j1 in d2.items():
        if i==j:
            d3.update({i:(i1+j1)})
        else:
            if i not in d3.keys():
                d3.update({i:i1})
            if j not in d3.keys():
                d3.update({j:j1})
print(d3)