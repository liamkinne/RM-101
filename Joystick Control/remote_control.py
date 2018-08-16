import pygame
import serial
import time

pygame.init()
pygame.joystick.init()
joystick = pygame.joystick.Joystick(0)
joystick.init()

ser = serial.Serial('/dev/ttyUSB1', 115200)

button_map = {
	'4': 'W',
	'6': 'S',
	'7': 'A',
	'5': 'D',
	'12': 'R',
	'14': 'F',
	'15': 'Q',
	'13': 'E'
}

print(joystick.get_name())
print("Number of axes: " + str(joystick.get_numaxes()))

while True:
	event = pygame.event.wait()	
	if event.type == pygame.JOYBUTTONDOWN:
		ser.write(bytes(button_map[str(event.button)], encoding='utf-8'))
		print(button_map[str(event.button)])
	elif event.type == pygame.JOYBUTTONUP:
		ser.write(bytes(button_map[str(event.button)].lower(), encoding='utf-8'))
		print(button_map[str(event.button)].lower())
