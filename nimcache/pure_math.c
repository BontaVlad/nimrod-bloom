/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w -O3  -I/Users/boyd/nimrod/lib -o /Users/boyd/Projects/nimrod-bloom/nimcache/pure_math.o /Users/boyd/Projects/nimrod-bloom/nimcache/pure_math.c */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <stdlib.h>

N_NIMCALL(void, randomize_77605)(NI seed) {
	srand(((int) (seed)));	srand48(seed);}
N_NIMCALL(NI, random_77549)(NI max) {
	NI result;
	int LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = rand();
	result = (NI64)(((NI) (LOC1)) % max);
	return result;
}N_NOINLINE(void, puremathInit)(void) {
}

N_NOINLINE(void, puremathDatInit)(void) {
}

