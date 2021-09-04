
import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False)
GPIO.setup(4, GPIO.OUT)
GPIO.setup(12, GPIO.OUT)

p1 = GPIO.PWM(4, 50)
p2 = GPIO.PWM(12, 50)

p1.start(0)
p2.start(0)

while True:
    for i in range(100+1):
        p1.ChangeDutyCycle(i)
        p2.ChangeDutyCycle(100-i)
        time.sleep(0.01)
