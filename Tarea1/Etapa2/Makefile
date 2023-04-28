JFLAGS = -g
JC = javac
JVM = java
FILE = config.txt
MAIN = Stage2

*.class: *.java
	$(JC) $(JFLAGS) *.java

run: $(MAIN).class
	$(JVM) $(MAIN) $(FILE)

clean:
	$(RM) *.class #esto no está sirviendo en ws, en ws sería DEL pero no encuentra los .class, si se hace manuel desde el cmd
				  # 'del *.class' funciona sin problemas