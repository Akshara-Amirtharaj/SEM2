# Iterate through a given dictionary and convert any number present in the form
# of a string into an integer or floating-point value appropriately
import re

d = {'a':'df45ds6.4dfs6.sre5', 'k':'bgi5e4rd5.345sd', 'r':'453sf/df4.435sf.fs'}

for key in d:
    rithvik = re.findall(r"[0-9]+\.?[0-9]*", string=d[key])

    for i in rithvik:
        if '.' in i:
            print(float(i),end=' ')
            
        else:
            print(int(i),end=' ')
            
    print()
        