import socket

target_host = "http://201.195.82.180/MSP/login"
target_port = 8085

# create a socket object
client = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

# send some data
client.sendto(b"AAABBBCCC", (target_host, target_port))

# receive some data
data, addr = client.recvfrom(4096)

client.close()

print(data)
