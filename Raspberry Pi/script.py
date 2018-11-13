import serial
import os
import time

while True:
    print("Trying to connect")
    try:
        conn = serial.Serial('/dev/ttyUSB0', 9600) #TODO Autodetect the serial device and it's port, fixed port for development only
        break
    except serial.SerialException as e:
        print("Error connecting, trying again in 3 seconds")
        time.sleep(3)

time.sleep(2)
print("Connection Successful")

while True:
    ler = conn.readline().decode()
    ler = ler.strip()
    if ler == 'fail':
        print("Shutting down")
        os.system("sudo shutdown now -P")