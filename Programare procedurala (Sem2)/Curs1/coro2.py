#Executie: python coro2.py

def filter_line(num):
   while True:
       line = (yield)
       if num in line:
           yield(line)

cor = filter_line("om")
next(cor)
a = cor.send("tietokone")
if a: print(a)
a = cor.send("computer")
if a: print(a)
a = cor.send("ordinateur")
if a: print(a)
a = cor.send("számítógép")
if a: print(a)
a = cor.send("ríomhaire")
if a: print(a)