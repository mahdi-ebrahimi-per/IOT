import RPi.GPIO as GPIO

GPIO.setwarnings(False)
GPIO.setmode(GPIO.BCM)
GPIO.setup(4, GPIO.OUT, initial= 0) # initial : مقدار اولیه 0 میشود
GPIO.setup(18, GPIO.IN, pull_up_down= GPIO.PUD_UP)
GPIO.setup(25, GPIO.IN, pull_up_down= GPIO.PUD_UP)

def printFunc():
    GPIO.output(4, 1)
    print('first button pressed\nLED Turned on.')

GPIO.add_event_detect(18, GPIO.FALLING,
 callback=lambda x: printFunc(), bouncetime= 300)

while True:
    GPIO.wait_for_edge(25, GPIO.FALLING)
    print('secend button pressed')
    GPIO.wait_for_edge(25, GPIO.RISING)
    print('secend button unpressed\nLED Turning off...')
    GPIO.output(4, 0)
