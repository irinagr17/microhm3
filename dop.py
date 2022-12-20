import serial
import time

lengths = {'f': 3,
           'u': 0,
           'd': 0}
        #    'a': 3, 
        #    'b': 0}
values = []

def get_connection(port):
  ser = serial.Serial(port, timeout=1)
  return ser

def send(ser, message, mesg_len):
    ser.write(message)
    time.sleep(0.1)
    result = None
    if mesg_len != 0:
        data = ser.read(mesg_len)
        result = data.decode()
        result = result.strip()
        print(result)
    return result

val_max = 0
val_min = 1024
lst = []
stop = True
stinput = True
if __name__ == '__main__':
    ser = get_connection("COM6")
    print("""Выберете команду:
        1 - Включить светодиод
        2 - Выключить светодиод
        3 - Включать и выключать светодиод автоматически по показаниям датчика освещенности
        4 - Включать/выключать поточную передачу данных с датчика
        5 - Регулировать яркость светодиода в зависимость от освещенности""")
    while True:
        if stinput:
            command = int(input("Введите: "))
        # length = lengths.get(inp, 17)
        if command == 1:
            send(ser, 'u'.encode(), 0)
        if command == 2:
            send(ser, 'd'.encode(), 0)
        if command == 3:
            while stop:
                timeout = time.time() + 10
                cmd = 'f'
                val = send(ser, cmd.encode(), lengths[cmd])
                if val:
                    val = int(val)
                    lst.append(val)
                    if val > val_max:
                        val_max = val
                    if val < val_min:
                        val_min = val
                    if val < ((val_min + val_max) / 2):
                        send(ser, 'u'.encode(), 0)
                    else:
                        send(ser, 'd'.encode(), 0)
                    # time.sleep(1)
                    if (time.time() > timeout):
                        break 
        if command == 4:
            while stop:
                timeout = time.time() + 10
                cmd = 'f'
                val = send(ser, cmd.encode(), lengths[cmd])
                if val:
                    val = int(val)
                    lst.append(val)
                print(lst)
                    # time.sleep(1)
                if (time.time() > timeout):
                    break 
        if command == 5:
            while stop:
                timeout = time.time() + 10
                cmd = 'f'
                val = send(ser, cmd.encode(), lengths[cmd])
                if val:
                    val = int(val)
                    lst.append(val)
                    if val > val_max:
                        val_max = val
                    if val < val_min:
                        val_min = val
                    if val < ((val_min + val_max) / 2):
                        send(ser, 'u'.encode(), 0)
                    else:
                        send(ser, 'd'.encode(), 0)
                    time.sleep(1)
                if (time.time() > timeout):
                    break 
        # send(ser, inp.encode(), length)
