#Cliente UDP
import socket

# Endereco IP do Servidor
SERVER = '127.0.0.1'
# Porta que o Servidor esta escutando
PORT = 2333

#socket.AF_INET é para usar o protocolo IPV4
#socket.SOCK_DGRAM é para retornar os dados em datagramas
udp = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

#uma dubla pra usar como parametro da funcao ".sendto()"
dest = (SERVER, PORT)

print ('Para sair use CTRL+X\n')
msg = input()
while msg != '\x18':
  udp.sendto (msg.encode(), dest)
  msg = input()
udp.close()
