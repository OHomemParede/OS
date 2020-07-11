from xmlrpc.client import ServerProxy

#A ServerProxy instance is an object that manages communication with a remote XML-RPC
server = ServerProxy('http://127.0.0.1:2333')

print('soma: ', server.soma(7, 3))
print('raiz quadrada: ', server.raiz_quadrada(9))
