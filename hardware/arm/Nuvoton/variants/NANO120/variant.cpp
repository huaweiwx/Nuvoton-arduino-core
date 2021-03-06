/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
#include "Arduino.h"

#pragma GCC diagnostic ignored "-Wconversion-null"

 #if defined(CHIP128P)
  #include "Chips/variant128.h"
 #elif defined(CHIP100P)
  #include "Chips/variant100.h"
 #elif defined(CHIP64P)
  #include "Chips/variant64.h"
 #elif defined(CHIP48P)
  #include "Chips/variant48.h"
 #else
  #error "undef please add me"	 
 #endif
