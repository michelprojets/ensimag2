#!/usr/bin/env python3
from http.server import HTTPServer, BaseHTTPRequestHandler

class Serv(BaseHTTPRequestHandler):
    def do_GET(self):
        self.send_response(200)
        self.send_header('Content-Type', 'text/plain')
        self.end_headers()
        self.wfile.write(self.raw_requestline)
        self.wfile.write(str(self.headers).encode())
    def do_POST(self):
        length = int(self.headers['Content-Length'])
        body = self.rfile.read(length)
        self.do_GET()
        self.wfile.write(body)
        

serv = HTTPServer(('localhost', 9090), Serv)

serv.serve_forever()
        
