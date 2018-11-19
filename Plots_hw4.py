import numpy as np
import matplotlib.pylab as plt

data= np.genfromtxt("proyectil.txt")

x=data[:,0]
y=data[:,1]


plt.figure()
plt.ylim(0,400)
plt.title("Trayectoria de un Proyectil a 45 grados")
plt.xlabel("Alcance horizontal (m)")
plt.ylabel("Alcance vertical (m)")
plt.plot(x,y)


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
plt.show()


