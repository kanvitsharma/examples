import random

movie_file = open("nmv.txt", "r")
file_content = movie_file.read()

movie_list = file_content.split("\n")

choice = random.choice(movie_list)

for movie in movie_list:
    if movie == choice:
        movie_list.remove(choice)

movie_file.close()

with open("nmv.txt", 'w') as movie_file:
    for movie in movie_list:
        movie_file.write("%s\n" % movie)
        
movie_file.close()

print("Movie: ", choice)

inp = input()