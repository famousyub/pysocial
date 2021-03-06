import sys
sys.path.append("gen-py")
from hello import HelloSvc

from thrift.transport import TSocket
from thrift.transport import TTransport
from thrift.protocol import TBinaryProtocol
from thrift.server import TServer

class HelloHandler:
    def hello_func(self):
        return "Hello from the python server"

handler = HelloHandler()
proc = HelloSvc.Processor(handler)

trans_ep = TSocket.TServerSocket(port=9090)
trans_fac = TTransport.TBufferedTransportFactory()
proto_fac = TBinaryProtocol.TBinaryProtocolFactory()
server = TServer.TSimpleServer(proc, trans_ep, trans_fac, proto_fac)
server.serve()