import RPi.GPIO as GPIO
import time

GPIO.setwarnings(False)
GPIO.setmode(GPIO.BCM)
GPIO.setup(18, GPIO.IN, pull_up_down= GPIO.PUD_UP)
GPIO.setup(25, GPIO.IN, pull_up_down= GPIO.PUD_UP)
GPIO.setup(4, GPIO.OUT, initial= 0)
GPIO.setup(17, GPIO.OUT, initial= 0)

def firstBtn():
    if (GPIO.input(18) == 0):
        print("First Button Pressed! Turning First LED on...")
        GPIO.output(4,1)

    else:
        print("First Button Released!")
        GPIO.output(4, 0)

def secendBtn():
    if (GPIO.input(25) == 0):
        print("Secend Button Pressed! Turning Secend LED on...")
        GPIO.output(17, 1)
    else:
        print("Secend Button Released!")
        GPIO.output(17, 0)


GPIO.add_event_detect(18, GPIO.BOTH, callback = lambda x : firstBtn() , bouncetime= 300)

GPIO.add_event_detect(25, GPIO.BOTH, callback = lambda x : secendBtn(), bouncetime= 300)

while True:
    time.sleep(1)
