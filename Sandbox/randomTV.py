import os
import random
import subprocess

#NOTE: change number of seasons and path for different TV shows
#Default is Psych

season = random.randrange(1,8)
if (season == 1):
    strSeason = 'Season 1'
elif (season == 2):
    strSeason = 'Season 2'
elif (season == 3):
    strSeason = 'Season 3'
elif (season == 4):
    strSeason = 'Season 4'
elif (season == 5):
    strSeason = 'Season 5'
elif (season == 6):
    strSeason = 'Season 6'
elif (season == 7):
    strSeason = 'Season 7'
elif (season == 8):
    strSeason = 'Season 8'

path = 'D:\\Users\\Austin\\Videos\\TV Shows\\Psych\\' + strSeason #Change path for different shows
files = os.listdir(path)
index = random.randrange(0, len(files))
title = files[index]
print(strSeason)
print(title)
p = subprocess.Popen(["C:\\Program Files\\VideoLAN\\VLC\\vlc.exe", path + '\\' + title])
