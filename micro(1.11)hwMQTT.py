import time
import serial
import paho.mqtt.client as mqtt_client
import random

broker="broker.emqx.io"

client = mqtt_client.Client(f'lab_{random.randint(10000, 99999)}')

def get_connection(port):
    ser = serial.Serial(port, timeout=1)
    return ser

# def send(ser, message, mesg_len):
#     ser.write(message)
#     time.sleep(0.1)
#     result = None
#     if mesg_len != 0:
#         data = ser.read(mesg_len)
#         result = data.decode()
#         result = result.strip()
#         print(result)
#     return 
arr = []
avg_all = 0
avg = 0

if __name__ == '__main__':
    ser = get_connection("COM9")
    client.connect(broker)

    # while ser.inWaiting() < 0 and 
    while(True):
        val = ser.read(2)
        # print(val)
        # val = ser.readline()
        # val = ser.read(count)
        result = val.decode()
        # print(type(result))

        # if(result!=""):
        #     result = int(result)
        #     arr = [result] + arr
        #     avg_all += int(result)
        # if(len(arr)>=100):
        #     avg = avg_all / 100
        #     avg_all -= arr.pop()
        # if(len(arr) < 100 and len(arr) > 0):
        #     avg = avg_all / len(arr)

        # client.connect(broker)
        # client.publish('lab/UNIQUE_ID/photo/instant', result)
        # client.disconnect()
        client.publish('lab/UNIQUE_ID/photo/averge', result)
    client.disconnect()



    # print(type(val))
    # val = val.strip()
    # result = int.from_bytes(val, "big")
    #result = int(val)
    #val = ser.readline()
    # result = [int(byte_) for byte_ in val]   # массив байт в массив int8
    # result = (result[0] << 8 & 0xFF00) + (result[1] & 0xFF) 
    # result = map(result, 0, 1024, 0, 100)
    # result = val.decode()
    # result = result.strip()
    # print(result)
    # print("fkfkfjm")

# client.connect(broker)
# client.publish('lab/UNIQUE_ID/photo/instant', "Ксюша работаем!!")
# client.disconnect()