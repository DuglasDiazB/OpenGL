#! /usr/bin/env python
# -*- coding: utf-8 -*-
import sqlite3

conexion = sqlite3.connect('datos_empleados.db')
print "Conexion a Base de datos establecida "
#id1=3
dui= '08798768-2'
nombre="Brayan Sandoval"
edad=25
direcc="Santa Ana"
nit='1398-278591-101-3'
salario=2500.0
c=conexion.cursor()
#id_depto=0
c.execute("INSERT INTO empleado VALUES (NULL,?,?,?,?,?,?)",(dui,nombre,edad,direcc,nit,salario))
conexion.commit()
print "Registros creados con exito"
conexion.close()


