l = [1,2,3,4,5,6,7,8,9,10]

for a in l:
    for b in l:
        for c in l:
            for d in l:
                x = (a, b, c, d)
                
                if len(set(x)) == len(x) and a * b == c * d:
                    print(x, end=', ')