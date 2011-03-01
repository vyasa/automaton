#############################################################################
# This file is part of the automata project.                                #
# Copyright (C) 2011 Samuel C. Payson, Timothy Kopp,                        #
#                    Akanksha Vyas,    Mark Platek                          #
#                                                                           #
# Automata is free software: you can redistribute it and/or modify it under #
# the terms of the GNU General Public License as published by the Free      #
# Software Foundation, either version 3 of the License, or (at you option)  #
# any later version.                                                        #
#                                                                           #
# Automata is distributed in the hope that it will be useful, but WITHOUT   #
# ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or     #
# FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for #
# more details.                                                             #
#                                                                           #
# You should have received a copy of the GNU General Public License along   #
# with automata. If not, see <http://www.gnu.org/licenses/>.                #
#############################################################################

CC      = gcc
CFLAGS  = -Wall -Werror -O2 -g -Iinclude
LINK    = gcc
LDFLAGS = 

MODULES = main
OBJ     = $(patsubst %, obj/%.o, $(MODULES))

automata: $(OBJ)
	$(LINK) $(LDFLAGS) $^ -o $@

obj/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f obj/* automata

rebuild: clean automata
	@echo "Project Rebuilt!"
