import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False)
GPIO.setup(4, GPIO.OUT)
GPIO.setup(12, GPIO.OUT)

p1 = GPIO.PWM(4, 50) #frequency 50
p2 = GPIO.PWM(12, 50)

p1.start(50) #Duty Cycle 50
p2.start(50)

p1.ChangeDutyCycle(100) # DutyCycle : 0-100
p2.ChangeDutyCycle(10)
time.sleep(2)

p1.ChangeDutyCycle(10)
p2.ChangeDutyCycle(100)
time.sleep(2)

p1.ChangeDutyCycle(100)
p2.ChangeDutyCycle(0)
time.sleep(2)
GPIO.cleanup()
