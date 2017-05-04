#!/usr/bin/python
# -*- coding: utf-8 -*-
import sys
import sqlite3
conn = sqlite3.connect('datos_empleados.db')
print "Conexion a Base de datos establecida "
cursor1 = conn.cursor()
cursor1.execute("SELECT id,dui,nit,nombre,direccion,salario FROM empleado ORDER BY id")
rows = cursor1.fetchall()
for row in rows:
    print "Id = ", row[0]
    print "DUI = ", row[1]
    print "NIT = ", row[2]
    print "Nombre = ", row[3]
    print "Direccion = ", row[4]
    print "Salario = ", row[5], "\n"

#print "Operacion realizada con exito"
conn.close()
