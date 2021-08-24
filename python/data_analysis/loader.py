# To add a new cell, type '# %%'
# To add a new markdown cell, type '# %% [markdown]'
# %%
import numpy as np
import matplotlib.pyplot as  plt

with open("OUT.TXT") as f:
    data = f.read().split(",")
    del(data[len(data)-1]) #末尾の改行を削除

for i in range(len(data)):
    data = np.append(data, data[i])

plt.plot(data)
plt.show()


# %%



