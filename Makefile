# Makefile for HPCE
INSTDIR=./bin
BINNAME=hpce
install: main.cpp cmd.h userMsg.h
	g++ main.cpp -o $(INSTDIR)/$(BINNAME)
