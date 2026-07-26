import os,sys

a= sys.argv
print(a)
refi=1
if len(a)>1:
  refi=int(a[1])
path='/gameworld/Pol/log/memoryusage.log'
if len(a)>2:
  path=a[2]
print(refi)
with open(path,'r') as f:
  ref=[]
  data=[]
  header=[]
  #c=0
  #for line in f.readlines():
  #  c+=1
  #print(c)
  ii=0
  for line in f.readlines():
    ii+=1
    line=line.strip()
    if not len(line):
      continue
    if not len(header):
      header=[h.strip() for h in line.split(';')[1:]]
      continue
    l =line.split(';')
    i=[float(l[i]) for i in range(1,len(l))]
    if refi!=1:
      if ii==refi:
        ref=i
        print("ef", l[0])
#      if ii==refi+1:
#        data=i
#        print("dar",l[0])
#        break
    if not len(ref):
      ref=i
    else:
      data=i

#print(header)
#print(ref)
#print(data)
print('in MB')
print('{:>22} {:>11} {:>11} {:>11} {:>11}'.format('name','ref','last','diff', 'mean (byte)'))
for i in range(len(header)):
  diff=data[i]-ref[i]
  count=header[i].endswith('Count')
  mean =0
  if count and data[i]!= 0:
    mean=data[i+1]/data[i]
  print('{:>22} {:>11.3f} {:>11.3f} {:>11.3f} {:>11.2f}'.format(header[i],
    ref[i]/1024/1024 if not count else ref[i],
    data[i]/1024/1024 if not count else data[i],
    diff/1024/1024 if not count else diff,
    mean))

sum=0
sumsize=0
total=0
x=False
fly=0
flyref=0
totalref=0
for i in range(len(header)):
  if i<1:
   continue
  h = header[i]
  if h.endswith('Count'):
    continue
  if h=='ObjSize':
   #print(h)
   #totalref+=ref[i]
   #total+=data[i]
   continue
  if h.startswith('Fly'):
    flyref+=ref[i]
    fly+=data[i]
    continue
#  if h.startswith('Obj'):
    #print(h)	
#    continue
#  print(h)
  totalref+=ref[i]
  total+=data[i]
  continue


print('total {:.3f}'.format(total/1024/1024))
print('fly {:.3f}'.format(fly/1024/1024))
print('')
print('totalref {:.3f}'.format(totalref/1024/1024))
print('flyref {:.3f}'.format(flyref/1024/1024))

tref=totalref+flyref
t=total+fly
print('delta {:.3f}'.format((t-tref)/1024/1024))
print('sumref {:.3f} unknown {:.3f}'.format(tref/1024/1024,(ref[0]-tref)/1024/1024))
print('sum {:.3f} unknown {:.3f}'.format(t/1024/1024,(data[0]-t)/1024/1024))
