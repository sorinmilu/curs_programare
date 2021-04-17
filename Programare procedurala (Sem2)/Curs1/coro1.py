#Executie: python coro1.py

def filter_line(ac):
   while True:
       line = (yield)
       if ac in line:
           print(line)


cor = filter_line("om")
next(cor)
cor.send("tietokone")
cor.send("computer")
cor.send("ordinateur")
cor.send("számítógép")
cor.send("ríomhaire")