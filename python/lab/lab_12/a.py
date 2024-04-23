import sys
bigram=[]

bi_prob={}
punctuations = ['.', ',', '?','!', ':', ';', "'", '"', '(', ')', '[', ']', '{', '}', '-', '—', '/', '&', '*', '$', '%' ,'#', '@', '+', '=', '~', '^', '\\', '|', '•', '†', '‡', '“', '’', '”']

with open("text.txt",encoding="utf8") as text:
    file=text.read()
    for p in punctuations:
        file=file.replace(p,'')
words= file.split()
bigram=[(words[i].lower(),words[i+1].lower()) for i in range(len(words)-1)]
bi_prob={(w1,w2):format(bigram.count((w1,w2))/words.count(w1),'.3f') for w1,w2 in set(bigram)}

prob=1
sentence=sys.argv[1]


for p in punctuations:
    sentence=sentence.replace(p,"")
sentence_words=sentence.split()

for i in range(len(sentence_words) - 1):
    pair = (sentence_words[i].lower(), sentence_words[i+1].lower())
    if pair in bi_prob.keys():
        prob *= bi_prob[pair]
    

print(prob)