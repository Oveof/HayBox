from inputs import get_gamepad
import math
import numpy as np

class GamePad:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    def calculate_angle(self):
        vx, vy = (self.x,self.y)
        angle_radians = math.atan2(vy, vx)  # Angle in radians
        angle_degrees = math.degrees(angle_radians)  # Convert to degrees
        return angle_radians, angle_degrees
    def __str__(self):
        return f"x: {self.x} y: {self.y}"



def read_xinput():
    gamepad = GamePad(128,128)
    while True:
        events = get_gamepad()
        for event in events:
            if event.code == "ABS_X":
                gamepad.x = event.state
            if event.code == "ABS_Y":
                gamepad.y = event.state
            print(gamepad)
            print(gamepad.calculate_angle())
read_xinput()
vx, vy = (59, 33)
angle_radians = math.atan2(vy, vx)  # Angle in radians
angle_degrees = math.degrees(angle_radians)  # Convert to degrees
print(angle_radians)
print(angle_degrees)