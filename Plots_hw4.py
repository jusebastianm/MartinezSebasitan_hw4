import numpy as np
import matplotlib.pylab as plt

data= np.genfromtxt("proyectil.txt")

x=data[:,0]
y=data[:,1]
pr=np.linspace(2249.772721,2249.772721, len(x))

plt.figure()
plt.plot(x,y)
plt.plot(x,pr)
plt.show()

