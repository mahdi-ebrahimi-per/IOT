import RPi.GPIO as GPIO


class SunTracker(): 
    def __init__(self):
        pass
    
    def setup_raspberrypi(self):
        GPIO.setwarnings(False)
        GPIO.setmode(GPIO.BCM)
    
    def setup_pins(self):
        
        GPIO.setup(4, GPIO.OUT)

    
    def set_LDR_ports(self, *PinNumber):
        # تنظیم کردن پین های سنسور موقعیت خورشید
        resistorsValues = []
        for pin in PinNumber:
            resistorsValues.append(pin)
    

    def findSun(self):
        # کمترین مقدار بین مقاومت های نوری را به عنوان مختصات خورشید معرفی میکند
        pass
    

