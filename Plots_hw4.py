#___________________________________________________________________________________________________________________________________________
#________________________________	TAREA 4 METODOS COMPUTACIONALES		____________________________________________________________
#___________________________________________________________________________________________________________________________________________


#___________________________________________________________________________________________________________________________________________
#Importo los paquetes necesarios

import numpy as np
import matplotlib.pylab as plt
from mpl_toolkits.mplot3d import axes3d
#___________________________________________________________________________________________________________________________________________



#___________________________________________________________________________________________________________________________________________
#_____________________________________  ECUACIONES DIFERENCIALES ORDINARIAS - ODE __________________________________________________________
#___________________________________________________________________________________________________________________________________________


	#___________________________________________________________________________________________________________________________________________

#				Importo datos y realizo grafica para mi primer caso de proyectil a 45 grados
data= np.genfromtxt("proyectil.txt")

x=data[:,0]
y=data[:,1]


plt.figure()
plt.ylim(0,400)
plt.title("Trayectoria de un Proyectil a 45 grados")
plt.xlabel("Alcance horizontal (m)")
plt.ylabel("Alcance vertical (m)")
plt.plot(x,y)
plt.savefig("proyectil_1.png")
#___________________________________________________________________________________________________________________________________________

#				Importo datos y realizo grafica para mi segundo caso de proyectil a variables grados
data2=np.genfromtxt("proyectil_2.txt")

x_10=data2[:,0]
y_10=data2[:,1]

x_20=data2[:,3]
y_20=data2[:,4]

x_30=data2[:,6]
y_30=data2[:,7]

x_40=data2[:,9]
y_40=data2[:,10]

x_50=data2[:,12]
y_50=data2[:,13]

x_60=data2[:,15]
y_60=data2[:,16]

x_70=data2[:,18]
y_70=data2[:,19]

plt.figure()
plt.ylim(0,500)
plt.title("Trayectoria de un Proyectil a diferentes grados")
plt.xlabel("Alcance horizontal (m)")
plt.ylabel("Alcance vertical (m)")
plt.plot(x_10,y_10, label="10 grados")
plt.plot(x_20,y_20, label="20 grados")
plt.plot(x_30,y_30, label="30 grados")
plt.plot(x_40,y_40, label="40 grados")
plt.plot(x_50,y_50, label="50 grados")
plt.plot(x_60,y_60, label="60 grados")
plt.plot(x_70,y_70, label="70 grados")
plt.legend(loc=0)
plt.savefig("proyectil_2.png")
#___________________________________________________________________________________________________________________________________________


#___________________________________________________________________________________________________________________________________________
#_____________________________________  ECUACIONES DIFERENCIALES PARCIALES - PDE __________________________________________________________
#___________________________________________________________________________________________________________________________________________

iniciales=np.genfromtxt("iniciales.txt",delimiter=",")
dis=np.shape(iniciales)
yo=np.linspace(0,50,dis[0])
xo=np.linspace(0,50,dis[1])
xo, yo=np.meshgrid(xo,yo)
fig=plt.figure()
ax=fig.add_subplot(1,1,1, projection='3d')
ax.plot_wireframe(xo,yo,iniciales)

plt.title("Inicio")
ax.set_xlabel("x(m)")
ax.set_ylabel("y(m)")
ax.set_zlabel("T(C)")
ax.set_zlim(0,100)
plt.savefig("iniciales.png")

