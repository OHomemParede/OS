#Servidor UDP
import socket

#Endereco IP do Servidor
HOST = '' #Vazio representa maquina local
# Porta que o Servidor vai escutar
PORT = 2333

#socket.AF_INET é para usar o protocolo IPV4
#socket.SOCK_DGRAM é para retornar os dados em datagramas
udp = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

#Aparentemente .bind() é o que torna desse codigo um "Servidor".
udp.bind((HOST, PORT))

while True:
  msg, cliente_ip = udp.recvfrom(1024)
  print (cliente_ip, msg)
udp.close()
