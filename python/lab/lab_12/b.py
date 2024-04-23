import sys
read_file=sys.argv[1]

try:
    with open(read_file,"r") as file:
        print(file.read())
except FileNotFoundError:
    with open(read_file,"w") as file:
        file.write("some contents")