#! /usr/bin/env python
# -*- coding: utf-8 -*-
import sqlite3
conn = sqlite3.connect('datos_empleados.db')
print "Conexion a Base de datos establecida "

conn.execute("DELETE FROM empleado  WHERE id=1")
conn.commit()
print "Se borró la información"
cursor1 = conn.execute("SELECT id,dui,nit,nombre, direccion, salario FROM empleado ")
for row in cursor1:
   print "Id = ", row[0]
   print "DUI = ", row[1]
   print "NIT = ", row[2]
   print "Nombre = ", row[3]
   print "Direccion = ", row[4]
   print "Salario = ", row[5], "\n"

print "Operacion realizada con exito"
conn.close()
