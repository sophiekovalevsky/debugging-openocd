#!/usr/bin/env python3

import socket

HOST = '127.0.0.1'
PORT = 3334

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
    s.bind((HOST, PORT))
    s.listen()
    conn, addr = s.accept()
    with conn:
        print('Cliente GDB connectado', addr)
        while True:
            data = conn.recv(1024)
            print(data)
            if not data:
                break
