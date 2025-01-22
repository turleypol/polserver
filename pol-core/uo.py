tol=0x7387DF
for i in range(30):
    print(i,hex(1<<i), tol & (1<<i))
