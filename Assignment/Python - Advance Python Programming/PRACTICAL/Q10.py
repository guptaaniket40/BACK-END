import re

text = "Python is fun to learn."
word = "Python"

if re.match(word, text):
    print("Word matched at the beginning!")
else:
    print("No match found at the beginning.")
