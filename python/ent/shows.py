import random

shows_file = open("srsl.txt", "r")
file_content = shows_file.read()

shows_list = file_content.split("\n")

choice = random.choice(shows_list)

for show in shows_list:
    if show == choice:
        shows_list.remove(choice)

shows_file.close()

with open("srsl.txt", 'w') as shows_file:
    for show in shows_list:
        shows_file.write("%s\n" % show)
        
shows_file.close()

print("Shows: ", choice)

inp = input()
