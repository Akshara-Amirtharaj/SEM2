# # Convert a given dictionary of lists into lists of dictionaries.
# Example input: {'Science': [88, 89, 62, 95], 'Language': [77, 78, 84, 80]}
# Expected output: [{'Science': 88, 'Language': 77}, {'Science': 89, 'Language':
# 78}, {'Science': 62, 'Language': 84}, {'Science': 95, 'Language': 80}]

d={'Science':[45,67,76,34],'Language':[67,47,98,67]}
a = []
for i in range(len(d.get(list(d.keys())[0]))):
    
    data = {}

    for key in d:
        data[key] = d.get(key)[i]
        
    a.append(data)
    
print(a)