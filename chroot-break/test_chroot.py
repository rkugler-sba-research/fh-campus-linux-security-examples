import socket

def retrieve_file(path):
    s = socket.socket(socket.AF_UNIX, socket.SOCK_STREAM)
    s.connect("/tmp/filebroker.sock")
    s.send(path + '\n')
    out = ''
    while True:
        data = s.recv(512)
        out += data
        if not data: break
    s.close()
    print('Received ' + repr(out))

retrieve_file('/etc/passwd')
retrieve_file('xxxx')
retrieve_file('x')
retrieve_file('../../../../../../etc/passwd')
