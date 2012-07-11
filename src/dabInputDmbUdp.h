/*
   Copyright (C) 2009 Her Majesty the Queen in Right of Canada (Communications
   Research Center Canada)
   */
/*
   This file is part of CRC-DabMux.

   CRC-DabMux is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as
   published by the Free Software Foundation, either version 3 of the
   License, or (at your option) any later version.

   CRC-DabMux is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with CRC-DabMux.  If not, see <http://www.gnu.org/licenses/>.
   */

#ifndef DAB_INPUT_DMB_UDP_H
#define DAB_INPUT_DMB_UDP_H


#ifdef HAVE_CONFIG_H
#   include "config.h"
#endif
#include "dabInput.h"


#ifdef HAVE_FORMAT_DMB
#   ifdef HAVE_INPUT_UDP


extern struct dabInputOperations dabInputDmbUdpOperations;

int dabInputDmbUdpInit(void** args);
int dabInputDmbUdpOpen(void* args, const char* inputName);
int dabInputDmbUdpRead(dabInputOperations* ops, void* args, void* buffer, int size);
int dabInputDmbUdpClose(void* args);
int dabInputDmbUdpClean(void** args);


#   endif
#endif


#endif // DAB_INPUT_DMB_UDP_H
