/* tss.h - Data type for TSS with an I/O permission bitmap.
   Copyright (C) 2002 Free Software Foundation, Inc.
   Written by Marcus Brinkmann.

   This file is part of GNU Mach.

   GNU Mach is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   GNU Mach is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111, USA. */

#ifndef _I386_TSS_H_
#define _I386_TSS_H_

#include <oskit/x86/tss.h>
#include <machine/io_perm.h>

/* The structure extends the TSS structure provided by OSKit by an I/O
   permission bitmap and the barrier.  */
struct task_tss
{
  struct x86_tss tss;
  unsigned char iopb[IOPB_BYTES];
  unsigned char barrier;
};

#endif  /* _I386_TSS_H_ */
