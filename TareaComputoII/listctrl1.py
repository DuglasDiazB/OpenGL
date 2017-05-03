#!/usr/bin/python
# -*- coding: utf-8 -*- 
##Antonio Jonathan Centeno Hernandez
##Duglas Enrique Diaz Barahona
###########################################################################
## Python code generated with wxFormBuilder (version Apr 20 2016)
## http://www.wxformbuilder.org/
##
## PLEASE DO "NOT" EDIT THIS FILE!
###########################################################################

import wx
import wx.xrc
import sqliteclass #Clase para conectar con bd con sqlite
import sqlite3
###########################################################################
## Class MyFrame1
###########################################################################

import noname
class MyFrame1 ( wx.Frame ):
	
	def __init__( self, parent ):
		
		#conn = sqlite3.connect('datos_empleados.db')
		#print "Conexion a Base de datos establecida "
		#cursor1 = conn.cursor()
		#cursor1.execute("SELECT id,dui,nit,nombre,direccion,salario,edad FROM empleado WHERE id = id1")
		#rows = cursor1.fetchall()
		#self.lista=[]
		#for row in rows:
			#self.lista.append(row[0])
			#self.lista.append(row[1])
			#self.lista.append(row[2])
			#self.lista.append(row[3])
			#self.lista.append(row[4])
			#self.lista.append(row[5])
			#self.lista.append(row[6])
			
		
		
		
		self.title="Listar Empleados, Busqueda por Nombre"
		wx.Frame.__init__ ( self, parent, id = wx.ID_ANY, title = self.title, pos = wx.DefaultPosition, size = wx.Size( 800,400 ), style = wx.DEFAULT_FRAME_STYLE|wx.TAB_TRAVERSAL )
		
		self.SetSizeHintsSz( wx.DefaultSize, wx.DefaultSize )
		
		fgSizer1 = wx.FlexGridSizer( 2, 1, 0, 0 )
		fgSizer1.SetFlexibleDirection( wx.BOTH )
		fgSizer1.SetNonFlexibleGrowMode( wx.FLEX_GROWMODE_SPECIFIED )
		
		fgSizer2 = wx.FlexGridSizer( 0, 3, 0, 0 )
		fgSizer2.SetFlexibleDirection( wx.BOTH )
		fgSizer2.SetNonFlexibleGrowMode( wx.FLEX_GROWMODE_SPECIFIED )
		
		self.m_staticText1 = wx.StaticText( self, wx.ID_ANY, u"Buscar", wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText1.Wrap( -1 )
		fgSizer2.Add( self.m_staticText1, 0, wx.ALL, 5 )
		
		self.txt_Busqueda = wx.TextCtrl( self, wx.ID_ANY, wx.EmptyString,  wx.DefaultPosition, wx.Size( 250,-1 ), 0 )
		fgSizer2.Add(self.txt_Busqueda , 0, wx.ALL, 5 )
		
		self.btn_Buscar = wx.Button( self, wx.ID_ANY, u"Actualizar", wx.DefaultPosition, wx.DefaultSize, 0 )
		fgSizer2.Add( self.btn_Buscar, 0, wx.ALL, 5 )
		
		
		fgSizer1.Add( fgSizer2, 1, wx.EXPAND, 5 )
		
		fgSizer3 = wx.FlexGridSizer( 1, 2, 0, 0 )
		fgSizer3.SetFlexibleDirection( wx.BOTH )
		fgSizer3.SetNonFlexibleGrowMode( wx.FLEX_GROWMODE_SPECIFIED )
		fgSizer3.AddSpacer( ( 30, 0), 1, wx.EXPAND, 5 )
		self.listctrl = wx.ListCtrl( self, wx.ID_ANY,  wx.Point( 10,10 ), wx.Size( 800,200 ), wx.LC_REPORT|wx.SUNKEN_BORDER )
		fgSizer3.Add( self.listctrl, 0, wx.ALL, 5 )
		
		
		fgSizer1.Add( fgSizer3, 1, wx.EXPAND, 5 )
		
		
		self.SetSizer( fgSizer1 )
		self.Layout()
		
		self.Centre( wx.BOTH )
		
		# Connect Events
		self.btn_Buscar.Bind( wx.EVT_BUTTON, self.Buscar )
		self.txt_Busqueda.Bind( wx.EVT_TEXT, self.Busqueda )
		self.listctrl.Bind(wx.EVT_LIST_ITEM_SELECTED, self.Seleccionar)
		#Conexion Bd
		self.db = sqliteclass.Database("datos_empleados.db") #Instanciar la conexion a la Bd.
		#Evento cargar datos de encabezado a la lista y se definen las columnas que lleva el control
		self.listctrl.InsertColumn(0, 'Id', width=50)
		self.listctrl.InsertColumn(1, 'Nombre', width=280)
		self.listctrl.InsertColumn(2, 'Dui', width=110)
		self.listctrl.InsertColumn(3, 'Nit', width=150)
		self.listctrl.InsertColumn(4, 'Edad', width=70)
		self.listctrl.InsertColumn(5, 'Salario', width=90)
		self.listctrl.InsertColumn(6, 'Direccion', width=300)
		
		self.Cargar()
	
	def __del__( self ):
		pass
	
	
	# Virtual event handlers, overide them in your derived class
	def Buscar( self, event ):
		self.Cargar()
	def Busqueda( self, event ):
		self.Cargar()	
	def Seleccionar(self, event):  # wxGlade: MyFrame2.<event_handler>
		self.item ='' 
		self.item2 =''
		
		
		self.item = self.listctrl.GetFocusedItem() #traer la posicion del indice
		self.item2 = self.listctrl.GetItemText(self.item)#traer el texto del primera columna segun la posicion del indice
		
		conn = sqlite3.connect('datos_empleados.db')
		print "Conexion a Base de datos establecida "
		cursor1 = conn.cursor()
		id9=(int(self.item2),)
		cursor1.execute("SELECT id,dui,nit,nombre,direccion,salario,edad FROM empleado WHERE id = ?",id9)
		rows = cursor1.fetchall()
		self.lista=[]
		for row in rows:
			self.lista.append(row[0])
			self.lista.append(row[1])
			self.lista.append(row[2])
			self.lista.append(row[3])
			self.lista.append(row[4])
			self.lista.append(row[5])
			self.lista.append(row[6])
		print self.item,self.item2,id9
		self.dui=self.lista[1]
		self.nit=self.lista[2]
		self.nombre=self.lista[3]
		self.direccion=self.lista[4]
		self.salario=self.lista[5]
		self.edad=self.lista[6]
				
		#Instanciar ventana hija
		self.frm_child = noname.MyFrame1(self)
	
		self.frm_child.Show()
		
		self.frm_child.txtid.SetValue(self.item2)
		self.frm_child.txtdui.SetValue(self.dui)
		self.frm_child.txtnit.SetValue(self.nit)
		self.frm_child.txtnombre.SetValue(self.nombre)
		self.frm_child.txtdireccion.SetValue(self.direccion)
		self.frm_child.txtsalario.SetValue(str(self.salario))
		self.frm_child.txtedad.SetValue(str(self.edad))
		#self.frm_child.txtid.SetValue(self.lista[0])
		

		
	def Cargar(self):
		#evento para cargar datos de la bd a la lista de 2 maneras todos si el ctrl texto esta vacio 
		#o dependiendo de la busqueda con like asi muestra los resultados
		self.listctrl.DeleteAllItems() # quita los renglones de la lista
		cadena_buscar=self.txt_Busqueda.GetValue()	
		if cadena_buscar!="":
			self.prod="%"+str(cadena_buscar)+"%"
			sql="select * from empleado where nombre like ?"
			data_param=self.prod
			typesql='SL'
			self.rows=self.db.query(sql,data_param,typesql)
		else:	
			sql="""select * from empleado"""
			data_param=''
			typesql='S'
			self.rows=self.db.query(sql,data_param,typesql)	
		self.row_count = 0
		#al tener el cursor se van insertando las columnas
		for row in self.rows:
			self.listctrl.InsertStringItem(self.row_count, str(row[0])) #Para insertar el indice de la fila pero del control va en la posicion columna 0
			self.listctrl.SetStringItem(self.row_count,1, str(row[2])) #en la fila insertada columna 1, se inserta el valor que queremos
			self.listctrl.SetStringItem(self.row_count,2, str(row[1])) #en la fila insertada columna 2, se inserta el valor siguiente 
			self.listctrl.SetStringItem(self.row_count,3, str(row[5]))
			self.listctrl.SetStringItem(self.row_count,4, str(row[3]))
			self.listctrl.SetStringItem(self.row_count,5, str(row[6]))
			self.listctrl.SetStringItem(self.row_count,6, str(row[4]))
			if self.row_count % 2:
				self.listctrl.SetItemBackgroundColour(self.row_count, "cyan")
			else:
				self.listctrl.SetItemBackgroundColour(self.row_count, "yellow")
			self.row_count += 1 	
			
class App(wx.App):
    def OnInit(self):
        frame =  MyFrame1(None)
        self.SetTopWindow(frame)
        frame.Show(True)
        return True

if __name__ == "__main__":
    app = App(0)
    app.MainLoop()
