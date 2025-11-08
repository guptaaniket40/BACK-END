import re

text = "Python is a powerful programming language."
word = "powerful"

if re.search(word, text):
    print("Word found!")
else:
    print("Word not found.")
