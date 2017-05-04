#!/usr/bin/python
# -*- coding: utf-8 -*-

import sqlite3
conn = sqlite3.connect('datos_empleados.db')
print "Conexion a Base de datos establecida "
d_id=1
idx=(d_id,)
d_salario=899.5
d_direccion='San Miguel, El Salvador'
#usando un diccionario como parametro
data_param = {'id1':d_id, 'salario1':d_salario, 'direccion1':d_direccion}
sql = """UPDATE empleado
      SET salario=:salario1,
      direccion=:direccion1
      WHERE id=:id1
      """

conn.execute(sql, data_param)
conn.commit()

cursor1 = conn.cursor()
cursor1.execute("SELECT id,dui,nit,nombre,direccion,salario FROM empleado  WHERE id=?",idx)
rows = cursor1.fetchall()
for row in rows:
    print "Id = ", row[0]
    print "DUI = ", row[1]
    print "NIT = ", row[2]
    print "Nombre = ", row[3]
    print "Direccion = ", row[4]
    print "Salario = ", row[5], "\n"

conn.close()





