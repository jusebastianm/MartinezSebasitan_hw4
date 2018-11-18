import numpy as np
import matplotlib.pylab as plt

data= np.genfromtxt("proyectil.txt")

x=data[:,0]
y=data[:,1]


plt.figure()
plt.title("Proyectil a 45 grados")
plt.xlabel("Alcance horizontal (m)")
plt.ylabel("Alcance vertical (m)")
plt.plot(x,y)
plt.show()

