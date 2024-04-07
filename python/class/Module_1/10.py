'''
         1
        1 1
       1 2 1
      1 3 3 1
     1 4 6 4 1
   1 5 10 10 5 1

'''
rows = int(input("Enter the number of rows for Pascal's Triangle: "))

for row in range(rows):

    value = 1
    print(' ' * (rows - row - 1), end='  ')


    for i in range(row + 1):
        print(chr(value+65-1), end=' ')
        
        value = value * (row - i) // (i + 1)
    print()
