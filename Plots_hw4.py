import numpy as np
import matplotlib.pylab as plt

data= np.genfromtxt("proyectil.txt")

x=data[:,0]
y=data[:,1]


plt.figure()
plt.title("Trayectoria de un Proyectil a 45 grados")
plt.xlabel("Alcance horizontal (m)")
plt.ylabel("Alcance vertical (m)")
plt.plot(x,y)


data2=np.genfromtxt("proyectil_2.txt")

x_10=data2[:,0]
y_10=data2[:,1]

x_20=data2[:,4]
y_20=data2[:,5]

x_30=data2[:,7]
y_30=data2[:,8]

x_40=data2[:,10]
y_40=data2[:,11]

x_50=data2[:,13]
y_50=data2[:,14]

x_60=data2[:,16]
y_60=data2[:,17]

x_70=data2[:,19]
y_70=data2[:,20]

plt.figure()
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
plt.show()


