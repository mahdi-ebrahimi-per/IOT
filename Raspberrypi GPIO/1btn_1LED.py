
import RPi.GPIO as GPIO

GPIO.setwarnings(False)
GPIO.setmode(GPIO.BCM)
GPIO.setup(4, GPIO.OUT)
GPIO.setup(18, GPIO.IN, pull_up_down= GPIO.PUD_UP)

while True:
        GPIO.wait_for_edge(18, GPIO.FALLING)
        print('pressing')
        GPIO.output(4,1)

        GPIO.wait_for_edge(18, GPIO.RISING)
        print('not pressed')
        GPIO.output(4,0)
