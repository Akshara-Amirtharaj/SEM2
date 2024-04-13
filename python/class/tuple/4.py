#Given a list of distinct positive integers, return the tuples (𝑎, 𝑏, 𝑐, 𝑑) such that
#𝑎 ∗ 𝑏 = 𝑐 ∗ 𝑑 where 𝑎, 𝑏, 𝑐, and 𝑑 are elements of the list, and 𝑎 ≠ 𝑏 ≠ 𝑐 ≠ d
l = [1,2,3,4,5,6,7,8,9,10]

for a in l:
    for b in l:
        for c in l:
            for d in l:
                x = (a, b, c, d)
                
                if len(set(x)) == len(x) and a * b == c * d:
                    print(x, end=', ')