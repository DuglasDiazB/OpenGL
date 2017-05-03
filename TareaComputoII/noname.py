# -*- coding: utf-8 -*- 

###########################################################################
## Python code generated with wxFormBuilder (version Apr 18 2017)
## http://www.wxformbuilder.org/
##
## PLEASE DO "NOT" EDIT THIS FILE!
###########################################################################

import wx
import wx.xrc
import sqlite3

###########################################################################
## Class MyFrame1
###########################################################################

class MyFrame1 ( wx.Frame ):
	
	def __init__( self, parent ):
		wx.Frame.__init__ ( self, parent, id = wx.ID_ANY, title = u"Mantenimiento Empleados", pos = wx.DefaultPosition, size = wx.Size( 600,500 ), style = wx.DEFAULT_FRAME_STYLE|wx.TAB_TRAVERSAL )
		
		self.SetSizeHintsSz( wx.DefaultSize, wx.DefaultSize )
		
		gSizer1 = wx.GridSizer( 10, 4, 0, 0 )
		
		
		gSizer1.AddSpacer( ( 0, 0), 1, wx.EXPAND, 5 )
		
		
		gSizer1.AddSpacer( ( 0, 0), 1, wx.EXPAND, 5 )
		
		
		gSizer1.AddSpacer( ( 0, 0), 1, wx.EXPAND, 5 )
		
		
		gSizer1.AddSpacer( ( 0, 0), 1, wx.EXPAND, 5 )
		
		
		gSizer1.AddSpacer( ( 0, 0), 1, wx.EXPAND, 5 )
		
		self.m_staticText3 = wx.StaticText( self, wx.ID_ANY, u"id", wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText3.Wrap( -1 )
		gSizer1.Add( self.m_staticText3, 0, wx.ALL, 5 )
		
		self.txtid = wx.TextCtrl( self, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, 0 )
		self.txtid.Enable( False )
		gSizer1.Add( self.txtid, 0, wx.ALL, 5 )
		
		
		
		gSizer1.AddSpacer( ( 0, 0), 1, wx.EXPAND, 5 )
		
		
		gSizer1.AddSpacer( ( 0, 0), 1, wx.EXPAND, 5 )
		
		self.m_staticText4 = wx.StaticText( self, wx.ID_ANY, u"Dui", wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText4.Wrap( -1 )
		gSizer1.Add( self.m_staticText4, 0, wx.ALL, 5 )
		
		self.txtdui = wx.TextCtrl( self, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, 0 )
		gSizer1.Add( self.txtdui, 0, wx.ALL, 5 )
		
		
		gSizer1.AddSpacer( ( 0, 0), 1, wx.EXPAND, 5 )
		
		
		gSizer1.AddSpacer( ( 0, 0), 1, wx.EXPAND, 5 )
		
		self.m_staticText5 = wx.StaticText( self, wx.ID_ANY, u"Nombre", wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText5.Wrap( -1 )
		gSizer1.Add( self.m_staticText5, 0, wx.ALL, 5 )
		
		self.txtnombre = wx.TextCtrl( self, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, 0 )
		gSizer1.Add( self.txtnombre, 0, wx.ALL, 5 )
		
		
		gSizer1.AddSpacer( ( 0, 0), 1, wx.EXPAND, 5 )
		
		
		gSizer1.AddSpacer( ( 0, 0), 1, wx.EXPAND, 5 )
		
		self.m_staticText6 = wx.StaticText( self, wx.ID_ANY, u"Edad", wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText6.Wrap( -1 )
		gSizer1.Add( self.m_staticText6, 0, wx.ALL, 5 )
		
		self.txtedad = wx.TextCtrl( self, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, 0 )
		gSizer1.Add( self.txtedad, 0, wx.ALL, 5 )
		
		
		gSizer1.AddSpacer( ( 0, 0), 1, wx.EXPAND, 5 )
		
		
		gSizer1.AddSpacer( ( 0, 0), 1, wx.EXPAND, 5 )
		
		self.m_staticText7 = wx.StaticText( self, wx.ID_ANY, u"Direccion", wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText7.Wrap( -1 )
		gSizer1.Add( self.m_staticText7, 0, wx.ALL, 5 )
		
		self.txtdireccion = wx.TextCtrl( self, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, 0 )
		gSizer1.Add( self.txtdireccion, 0, wx.ALL, 5 )
		
		
		gSizer1.AddSpacer( ( 0, 0), 1, wx.EXPAND, 5 )
		
		
		gSizer1.AddSpacer( ( 0, 0), 1, wx.EXPAND, 5 )
		
		self.m_staticText8 = wx.StaticText( self, wx.ID_ANY, u"Nit", wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText8.Wrap( -1 )
		gSizer1.Add( self.m_staticText8, 0, wx.ALL, 5 )
		
		self.txtnit = wx.TextCtrl( self, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, 0 )
		gSizer1.Add( self.txtnit, 0, wx.ALL, 5 )
		
		
		gSizer1.AddSpacer( ( 0, 0), 1, wx.EXPAND, 5 )
		
		
		gSizer1.AddSpacer( ( 0, 0), 1, wx.EXPAND, 5 )
		
		self.m_staticText9 = wx.StaticText( self, wx.ID_ANY, u"Salario", wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText9.Wrap( -1 )
		gSizer1.Add( self.m_staticText9, 0, wx.ALL, 5 )
		
		self.txtsalario = wx.TextCtrl( self, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, 0 )
		gSizer1.Add( self.txtsalario, 0, wx.ALL, 5 )
		
		
		gSizer1.AddSpacer( ( 0, 0), 1, wx.EXPAND, 5 )
		
		
		gSizer1.AddSpacer( ( 0, 0), 1, wx.EXPAND, 5 )
		
		
		gSizer1.AddSpacer( ( 0, 0), 1, wx.EXPAND, 5 )
		
		
		gSizer1.AddSpacer( ( 0, 0), 1, wx.EXPAND, 5 )
		
		
		gSizer1.AddSpacer( ( 0, 0), 1, wx.EXPAND, 5 )
		
		self.Insertar = wx.Button( self, wx.ID_ANY, u"Insertar", wx.DefaultPosition, wx.DefaultSize, 0 )
		gSizer1.Add( self.Insertar, 0, wx.ALL, 5 )
		
		self.Actualizar = wx.Button( self, wx.ID_ANY, u"Actualizar", wx.DefaultPosition, wx.DefaultSize, 0 )
		gSizer1.Add( self.Actualizar, 0, wx.ALL, 5 )
		
		self.Eliminar = wx.Button( self, wx.ID_ANY, u"Eliminar", wx.DefaultPosition, wx.DefaultSize, 0 )
		gSizer1.Add( self.Eliminar, 0, wx.ALL, 5 )
		
		self.Limpiar = wx.Button( self, wx.ID_ANY, u"Limpiar", wx.DefaultPosition, wx.DefaultSize, 0 )
		gSizer1.Add( self.Limpiar, 0, wx.ALL, 5 )
		
		
		self.SetSizer( gSizer1 )
		self.Layout()
		
		self.Centre( wx.BOTH )
		
		# Connect Events
		self.Insertar.Bind( wx.EVT_LEFT_DOWN, self.insertar )
		self.Actualizar.Bind( wx.EVT_LEFT_DOWN, self.actualizar )
		self.Eliminar.Bind( wx.EVT_LEFT_DOWN, self.eliminar )
		self.Limpiar.Bind( wx.EVT_LEFT_DOWN, self.limpiar )
	
	def __del__( self ):
		pass
	
	
	# Virtual event handlers, overide them in your derived class
	def insertar( self, event ):
		conexion = sqlite3.connect('datos_empleados.db')
		print "Conexion a Base de datos establecida "
		#id1=int(self.txtid.GetValue())
		dui=str(self.txtdui.GetValue())
		nombre=str(self.txtnombre.GetValue())
		edad=int(self.txtedad.GetValue())
		direcc=str(self.txtdireccion.GetValue())
		nit=str(self.txtnit.GetValue())
		salario=str(self.txtsalario.GetValue())
		c=conexion.cursor()
		c.execute("INSERT INTO empleado VALUES (NULL,?,?,?,?,?,?)",(dui,nombre,edad,direcc,nit,salario))
		conexion.commit()
		QMessageBox.information(self,"Correcto","Datos guardados",QMessageBox.Discard)
		print "Registros creados con exito"
		conexion.close()
		event.Skip()
		
	def limpiar( self, event ):
		self.txtid.SetValue("")
		self.txtnombre.SetValue("")	
		self.txtdui.SetValue("")	
		self.txtnit.SetValue("")	
		self.txtdireccion.SetValue("")	
		self.txtsalario.SetValue("")	
		self.txtedad.SetValue("")
		QMessageBox.warning(self, "Correcto","Datos guardados",QMessageBox.Discard)
		event.Skip()		
	
	def actualizar( self, event ):
		conn = sqlite3.connect('datos_empleados.db')
		c=conn.cursor()
		print "Conexion a Base de datos establecida "
		#d_id=str(sel)
		#idx=(d_id,)
		#d_id=(self.txtid.GetValue())
		#dui=str(self.txtdui.GetValue())
		#nombre=str(self.txtnombre.GetValue())
		#edad=int(self.txtedad.GetValue())
		#direcc=str(self.txtdireccion.GetValue())
		#nit=str(self.txtnit.GetValue())
		#salario=float(self.txtsalario.GetValue())
		
		d_id=int(self.txtid.GetValue())
		d_nombre=str(self.txtnombre.GetValue())
		d_dui=str(self.txtdui.GetValue())
		d_edad=int(self.txtedad.GetValue())
		d_direcc=str(self.txtdireccion.GetValue())
		d_nit=str(self.txtnit.GetValue())
		d_salario=str(self.txtsalario.GetValue())
		
		
		#usando un diccionario como parametro
		data_param = {'id1':d_id,'dui':d_dui,'nombre':d_nombre,'edad':d_edad, 'direccion':d_direcc,'nit':d_nit, 'salario':d_salario}
		sql = """UPDATE empleado SET dui=:dui, nombre=:nombre, edad=:edad, direccion=:direccion, nit=:nit, salario=:salario WHERE id=:id1"""
		c.execute(sql, data_param)
		
		conn.commit()
		#wx.MessageBox('Correcto','Datos guardados','Info')
		c.close()
		event.Skip()
	
	def eliminar( self, event ):
		connd = sqlite3.connect('datos_empleados.db')
		print "Conexion a Base de datos establecida "
		self.eid1=self.txtid.GetValue()
		e_id=(int(self.eid1),)
		connd.execute("DELETE FROM empleado  WHERE id = ?", e_id)
		connd.commit()
		event.Skip()
		
   
	

# end of class MyFrame

class MyApp(wx.App):
    def OnInit(self):
        frame1 = MyFrame1(None)
        self.SetTopWindow(frame1)
        frame1.Show()
        return 1

# end of class MyApp

if __name__ == "__main__":
    app = MyApp(0)
    app.MainLoop()
