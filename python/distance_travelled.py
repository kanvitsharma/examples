from numpy import *
speed = float(input("Enter speed: "))
acceleration = float(input("Enter acceleration: "))
time_int = float(input("Enter time increment: "))

for time in arange(0, 100, time_int):
    distance = time * (speed + (acceleration * time) / 2)
    print(f"Time: {time:4.2f}\tDistance: {distance:9.2f}")