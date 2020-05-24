
# Makefile
# For 'Linux System Programming' training session from Kaiwan (kaiwanTECH)
# held on 15MAY 2020
# Organization:SASKEN


all: fork1 fork2 fork3 com1 com2


fork1:
	 	${CC} ${CFLAGS} fork1.c -o fork1
fork2: fork2.c
		${CC} ${CFLAGS} fork2.c -o fork2

fork3: fork3.c
		${CC} ${CFLAGS} fork3.c -o fork3
com1: com1.c
		${CC} ${CFLAGS} com1.c -o com1
com2: com2.c
		${CC} ${CFLAGS} com2.c -o com2
clean :
		rm fork1 fork2 fork3 com1 com2
help :
			@echo 'all   	  : To compile all program'
			@echo 'fork1    : To compile fork1 program-./fork1 to run program'
			@echo 'fork2    : To compile fork1 program-./fork2 to run program'
			@echo 'fork3    : To compile fork1 program-./fork3 to run program'
			@echo 'com1     : To compile com1 program-./com1 to run program'
			@echo 'com2     : To compile com2 progrm-./com2 to run program'
			@echo 'clean    : cleanup - remove all the binaries'
