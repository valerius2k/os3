PKGDIR  ?= ../../..
REP_DIR ?= $(PKGDIR)/../../..

include $(REP_DIR)/mk/osfree.mk

# the name of your library
TARGET	= libos2app.a

# list your .c files here
SRC_C	= app.c

# if your library implements the client side of an idl defined in an
# idl-file of your package, list the idl file name(s) here (no path needed)
CLIENTIDL = os2app.idl

include $(L4DIR)/mk/lib.mk
