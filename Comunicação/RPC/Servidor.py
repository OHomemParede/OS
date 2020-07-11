#O XML-RPC é um protocolo de chamada de procedimento remoto (CPR) que utiliza XML para
codificar suas chamadas e HTTP como um mecanismo de transporte
from xmlrpc.server import SimpleXMLRPCServer

def soma(a, b): return a+b
def raiz_quadrada(n): return n**0.5

endereco = ('127.0.0.1', 2333)

#criacao do servidor!
server = SimpleXMLRPCServer(endereco, logRequests=True)

# registrando as def
server.register_function(soma)
server.register_function(raiz_quadrada)

try:
  print('Server Online!')
  server.serve_forever()
except KeyboardInterrupt:
  print('Server Fechando.')
