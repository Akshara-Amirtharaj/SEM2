# Obtain the name and scores earned by N players and store them in the form of
# a dictionary. Based on the user’s requirement, return the dictionary entries
# corresponding to the scores between 2 values, say a and b


scores={"user1":95,"user2":89,"user3":54}
scores1={}
a=int(input("a:"))
b=int(input("b:"))
for key,value in scores.items():
    if a<value and value<b:
        scores1.update({key:value})
print(scores1)
        