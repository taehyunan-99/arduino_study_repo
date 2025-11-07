import serial # pyserial 라이브러리
import time

PORT = "/dev/cu.usbserial-14410"

arduino = serial.Serial(PORT, 9600)
time.sleep(1)

print("'1'을 입력하면 LED ON & '0'을 입력하면 LED OFF")
print("다른 걸 입력하면 python 프로그램 종료")

while 1:
    var = input("입력 : ")

    if var == "1":
        var = var.encode("utf-8")
        arduino.write(var)
        print("LED ON")
        time.sleep(1)

    elif var == "0":
        var = var.encode("utf-8")
        arduino.write(var)
        print("LED OFF")
        time.sleep(1)
    else:
        break