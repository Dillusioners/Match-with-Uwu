from itertools import permutations 
"""
    Team: Dillusioners
    By: jayspray
    For: Duel against UwU
"""
num_str = ""
i = 1

#Taking the 5 number inputs
while i <= 5:
    try:
        num = int(input(">> Enter term number {} :-> ".format(i)))
    #Trying and excepting the ValueError for aplhabetical inputs
    except ValueError:
        print("Please input only real number literals :(")
    else:
        num_str += str(num)
        i += 1

#Getting the permutation tuples and storing them in the list perm_list
perm_list = list(permutations(num_str))

#iterating through perm_list[i][j] to print all the numbers
for i in range(len(perm_list)):
    new_str = ""
    for j in range(len(perm_list[i])):
        new_str += perm_list[i][j]
    
    print(new_str)

print("Program has ended")
