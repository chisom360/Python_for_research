'''Write a piece of Python code that evaluates varA and varB, and then prints out one of the following messages:
   "string involved" if either varA or varB are strings
   "bigger" if varA is larger than varB

    "equal" if varA is equal to varB

    "smaller" if varA is smaller than varB
'''

if (type(varB) == str or type(varA) == str):
    print("string involved")
elif (varA > varB):
    print("bigger")
elif (varA == varB):
    print("equal")
else:
    print("smaller")
