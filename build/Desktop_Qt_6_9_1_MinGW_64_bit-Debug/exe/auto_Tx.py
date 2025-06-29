import serial
import time
from serial.tools import list_ports
import os
import sys

   # Configure the serial port. Replace with your actual port and settings.
   
def find_arty7_port():
    ports = list_ports.comports()
    for port in ports:
        # Customize this based on your device description or manufacturer
        if 'Digilent' in port.description or 'Arty' in port.description:
            return port.device
    return None
SERIAL_PORT = find_arty7_port()

if SERIAL_PORT is None:
    print("(Mock Mode) No FPGA found --> simulating command send...")
    if len(sys.argv) > 1:
        print(f"(Mock Mode) Would send: {sys.argv[1]}")
    else:
        print("(Mock Mode) No command provided.")
    sys.exit(0)

ser = serial.Serial(
      port=SERIAL_PORT,  # Example: '/dev/ttyACM0' on Linux, 'COM3' on Windows
      baudrate= 921600,
      timeout=1)

def send_data(data):
       ser.write(data.encode())  # Encode the string to bytes before sending
       print(f"Sent: {data}")



if len(sys.argv) > 1:
    command = sys.argv[1]
    send_data(command)
else:
    print("No command argument provided.")

ser.close()
