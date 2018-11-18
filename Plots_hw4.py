import numpy as np
import matplotlib.pylab as plt

data= np.genfromtxt("data.txt")

x=data[:,0]
y=data[:,1]

plt.figure()
plt.plot(x,y)
plt.show()

