/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w -O3  -I/Users/boyd/nimrod/lib -o /Users/boyd/Projects/nimrod-bloom/nimcache/nimrod-bloom_probabilities.o /Users/boyd/Projects/nimrod-bloom/nimcache/nimrod-bloom_probabilities.c */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct terrorfork93005 terrorfork93005;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct TGenericSeq {
NI len;
NI reserved;
};
typedef terrorfork93005* tallerrorrates93007[13];
typedef N_NIMCALL_PTR(void, TY889) (void* p, NI op);
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY889 marker;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct terrorfork93005 {
  TGenericSeq Sup;
  NF data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP19)(void* p, NI op);
N_NIMCALL(void, genericSeqAssign)(void* dest, void* src_70404, TNimType* mt);
NIM_CONST struct {
  TGenericSeq Sup;
  NF data[1];
} CNSTSEQ19 = {{1, 1}, {1.0000000000000000e+00}};
NIM_CONST terrorfork93005* TMP17 = ((terrorfork93005*)&CNSTSEQ19);
NIM_CONST struct {
  TGenericSeq Sup;
  NF data[33];
} CNSTSEQ27 = {{33, 33}, {1.0000000000000000e+00,
1.0000000000000000e+00,
3.9300000000000002e-01,
2.8299999999999997e-01,
2.2100000000000000e-01,
1.8099999999999999e-01,
1.5400000000000000e-01,
1.3300000000000001e-01,
1.1799999999999999e-01,
1.0500000000000000e-01,
9.5200000000000007e-02,
8.6900000000000005e-02,
8.0000000000000002e-02,
7.3999999999999996e-02,
6.8900000000000003e-02,
6.4500000000000002e-02,
6.0600000000000001e-02,
5.7099999999999998e-02,
5.3999999999999999e-02,
5.1299999999999998e-02,
4.8800000000000003e-02,
4.6500000000000000e-02,
4.4400000000000002e-02,
4.2500000000000003e-02,
4.0800000000000003e-02,
3.9199999999999999e-02,
3.7699999999999997e-02,
3.6400000000000002e-02,
3.5099999999999999e-02,
3.3900000000000000e-02,
3.2800000000000003e-02,
3.1699999999999999e-02,
3.0800000000000001e-02}};
NIM_CONST terrorfork93005* TMP25 = ((terrorfork93005*)&CNSTSEQ27);
NIM_CONST struct {
  TGenericSeq Sup;
  NF data[33];
} CNSTSEQ29 = {{33, 33}, {1.0000000000000000e+00,
1.0000000000000000e+00,
4.0000000000000002e-01,
2.3699999999999999e-01,
1.5500000000000000e-01,
1.0900000000000000e-01,
8.0399999999999999e-02,
6.1800000000000001e-02,
4.8899999999999999e-02,
3.9699999999999999e-02,
3.2899999999999999e-02,
2.7600000000000000e-02,
2.3599999999999999e-02,
2.0299999999999999e-02,
1.7700000000000000e-02,
1.5599999999999999e-02,
1.3800000000000000e-02,
1.2300000000000000e-02,
1.1100000000000000e-02,
9.9799999999999993e-03,
9.0600000000000003e-03,
8.2500000000000004e-03,
7.5500000000000003e-03,
6.9400000000000000e-03,
6.3899999999999998e-03,
5.9100000000000003e-03,
5.4799999999999996e-03,
5.1000000000000004e-03,
4.7499999999999999e-03,
4.4400000000000004e-03,
4.1599999999999996e-03,
3.8999999999999998e-03,
3.6700000000000001e-03}};
NIM_CONST terrorfork93005* TMP27 = ((terrorfork93005*)&CNSTSEQ29);
NIM_CONST struct {
  TGenericSeq Sup;
  NF data[33];
} CNSTSEQ31 = {{33, 33}, {1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
2.5300000000000000e-01,
1.4699999999999999e-01,
9.1999999999999998e-02,
6.0900000000000003e-02,
4.2299999999999997e-02,
3.0599999999999999e-02,
2.2800000000000001e-02,
1.7399999999999999e-02,
1.3599999999999999e-02,
1.0800000000000001e-02,
8.7500000000000008e-03,
7.1799999999999998e-03,
5.9600000000000000e-03,
5.0000000000000001e-03,
4.2300000000000003e-03,
3.6200000000000000e-03,
3.1199999999999999e-03,
2.7000000000000001e-03,
2.3600000000000001e-03,
2.0699999999999998e-03,
1.8300000000000000e-03,
1.6199999999999999e-03,
1.4499999999999999e-03,
1.2899999999999999e-03,
1.1600000000000000e-03,
1.0499999999999999e-03,
9.4899999999999997e-04,
8.6200000000000003e-04,
7.8500000000000000e-04,
7.1699999999999997e-04}};
NIM_CONST terrorfork93005* TMP29 = ((terrorfork93005*)&CNSTSEQ31);
NIM_CONST struct {
  TGenericSeq Sup;
  NF data[33];
} CNSTSEQ33 = {{33, 33}, {1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.6000000000000000e-01,
9.1999999999999998e-02,
5.6099999999999997e-02,
3.5900000000000001e-02,
2.4000000000000000e-02,
1.6600000000000000e-02,
1.1800000000000000e-02,
8.6400000000000001e-03,
6.4599999999999996e-03,
4.9199999999999999e-03,
3.8100000000000000e-03,
3.0000000000000001e-03,
2.3900000000000002e-03,
1.9300000000000001e-03,
1.5800000000000000e-03,
1.2999999999999999e-03,
1.0800000000000000e-03,
9.0499999999999999e-04,
7.6400000000000003e-04,
6.4899999999999995e-04,
5.5500000000000005e-04,
4.7800000000000002e-04,
4.1300000000000001e-04,
3.5900000000000000e-04,
3.1399999999999999e-04,
2.7599999999999999e-04,
2.4300000000000000e-04,
2.1499999999999999e-04,
1.9100000000000001e-04}};
NIM_CONST terrorfork93005* TMP31 = ((terrorfork93005*)&CNSTSEQ33);
NIM_CONST struct {
  TGenericSeq Sup;
  NF data[33];
} CNSTSEQ35 = {{33, 33}, {1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0100000000000001e-01,
5.7799999999999997e-02,
3.4700000000000002e-02,
2.1700000000000001e-02,
1.4100000000000000e-02,
9.4299999999999991e-03,
6.4999999999999997e-03,
4.5900000000000003e-03,
3.3200000000000000e-03,
2.4399999999999999e-03,
1.8300000000000000e-03,
1.3900000000000000e-03,
1.0700000000000000e-03,
8.3900000000000001e-04,
6.6299999999999996e-04,
5.2999999999999998e-04,
4.2700000000000002e-04,
3.4699999999999998e-04,
2.8499999999999999e-04,
2.3499999999999999e-04,
1.9599999999999999e-04,
1.6400000000000000e-04,
1.3799999999999999e-04,
1.1700000000000000e-04,
9.9599999999999995e-05,
8.5300000000000000e-05,
7.3300000000000006e-05,
6.3299999999999994e-05}};
NIM_CONST terrorfork93005* TMP33 = ((terrorfork93005*)&CNSTSEQ35);
NIM_CONST struct {
  TGenericSeq Sup;
  NF data[33];
} CNSTSEQ37 = {{33, 33}, {1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
6.3799999999999996e-02,
3.6400000000000002e-02,
2.1600000000000001e-02,
1.3299999999999999e-02,
8.4399999999999996e-03,
5.5199999999999997e-03,
3.7100000000000002e-03,
2.5500000000000002e-03,
1.7899999999999999e-03,
1.2800000000000001e-03,
9.3499999999999996e-04,
6.9200000000000002e-04,
5.1900000000000004e-04,
3.9399999999999998e-04,
3.0299999999999999e-04,
2.3599999999999999e-04,
1.8500000000000000e-04,
1.4700000000000000e-04,
1.1700000000000000e-04,
9.4400000000000004e-05,
7.6600000000000005e-05,
6.2600000000000004e-05,
5.1499999999999998e-05,
4.2599999999999999e-05,
3.5500000000000002e-05,
2.9700000000000000e-05,
2.5000000000000001e-05}};
NIM_CONST terrorfork93005* TMP35 = ((terrorfork93005*)&CNSTSEQ37);
NIM_CONST struct {
  TGenericSeq Sup;
  NF data[33];
} CNSTSEQ39 = {{33, 33}, {1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
2.2900000000000000e-02,
1.3500000000000000e-02,
8.1899999999999994e-03,
5.1300000000000000e-03,
3.2900000000000000e-03,
2.1700000000000001e-03,
1.4599999999999999e-03,
1.0000000000000000e-03,
7.0200000000000004e-04,
4.9899999999999999e-04,
3.6000000000000002e-04,
2.6400000000000002e-04,
1.9599999999999999e-04,
1.4700000000000000e-04,
1.1200000000000000e-04,
8.5599999999999994e-05,
6.6299999999999999e-05,
5.1799999999999999e-05,
4.0800000000000002e-05,
3.2400000000000001e-05,
2.5899999999999999e-05,
2.0900000000000000e-05,
1.6900000000000001e-05,
1.3800000000000000e-05,
1.1300000000000000e-05}};
NIM_CONST terrorfork93005* TMP37 = ((terrorfork93005*)&CNSTSEQ39);
NIM_CONST struct {
  TGenericSeq Sup;
  NF data[33];
} CNSTSEQ41 = {{33, 33}, {1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.4500000000000001e-02,
8.4600000000000005e-03,
5.0899999999999999e-03,
3.1400000000000000e-03,
1.9900000000000000e-03,
1.2899999999999999e-03,
8.5200000000000000e-04,
5.7399999999999997e-04,
3.9399999999999998e-04,
2.7500000000000002e-04,
1.9400000000000000e-04,
1.3999999999999999e-04,
1.0100000000000000e-04,
7.4599999999999997e-05,
5.5500000000000001e-05,
4.1699999999999997e-05,
3.1600000000000002e-05,
2.4199999999999999e-05,
1.8700000000000001e-05,
1.4600000000000001e-05,
1.1399999999999999e-05,
9.0100000000000001e-06,
7.1600000000000001e-06,
5.7300000000000002e-06}};
NIM_CONST terrorfork93005* TMP39 = ((terrorfork93005*)&CNSTSEQ41);
NIM_CONST struct {
  TGenericSeq Sup;
  NF data[33];
} CNSTSEQ43 = {{33, 33}, {1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
5.3099999999999996e-03,
3.1700000000000001e-03,
1.9400000000000001e-03,
1.2099999999999999e-03,
7.7499999999999997e-04,
5.0500000000000002e-04,
3.3500000000000001e-04,
2.2599999999999999e-04,
1.5500000000000000e-04,
1.0800000000000000e-04,
7.5900000000000002e-05,
5.4200000000000003e-05,
3.9199999999999997e-05,
2.8600000000000001e-05,
2.1100000000000001e-05,
1.5699999999999999e-05,
1.1800000000000001e-05,
8.9600000000000006e-06,
6.8499999999999996e-06,
5.2800000000000003e-06,
4.0999999999999997e-06,
3.1999999999999999e-06}};
NIM_CONST terrorfork93005* TMP41 = ((terrorfork93005*)&CNSTSEQ43);
NIM_CONST struct {
  TGenericSeq Sup;
  NF data[33];
} CNSTSEQ45 = {{33, 33}, {1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
3.3400000000000001e-03,
1.9800000000000000e-03,
1.1999999999999999e-03,
7.4399999999999998e-04,
4.6999999999999999e-04,
3.0200000000000002e-04,
1.9799999999999999e-04,
1.3200000000000001e-04,
8.8900000000000006e-05,
6.0900000000000003e-05,
4.2299999999999998e-05,
2.9700000000000000e-05,
2.1100000000000001e-05,
1.5200000000000000e-05,
1.1000000000000000e-05,
8.0700000000000007e-06,
5.9699999999999996e-06,
4.4499999999999997e-06,
3.3500000000000001e-06,
2.5399999999999998e-06,
1.9400000000000001e-06}};
NIM_CONST terrorfork93005* TMP43 = ((terrorfork93005*)&CNSTSEQ45);
NIM_CONST struct {
  TGenericSeq Sup;
  NF data[33];
} CNSTSEQ47 = {{33, 33}, {1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
2.0999999999999999e-03,
1.2400000000000000e-03,
7.4700000000000005e-04,
4.5899999999999999e-04,
2.8699999999999998e-04,
1.8300000000000000e-04,
1.1800000000000000e-04,
7.7700000000000005e-05,
5.1799999999999999e-05,
3.4999999999999997e-05,
2.4000000000000001e-05,
1.6600000000000000e-05,
1.1600000000000001e-05,
8.2300000000000008e-06,
5.8900000000000004e-06,
4.2500000000000000e-06,
3.1000000000000000e-06,
2.2800000000000002e-06,
1.6899999999999999e-06,
1.2600000000000000e-06}};
NIM_CONST terrorfork93005* TMP45 = ((terrorfork93005*)&CNSTSEQ47);
NIM_CONST struct {
  TGenericSeq Sup;
  NF data[33];
} CNSTSEQ49 = {{33, 33}, {1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
1.0000000000000000e+00,
7.7800000000000005e-04,
4.6600000000000000e-04,
2.8400000000000002e-04,
1.7600000000000000e-04,
1.1100000000000000e-04,
7.1199999999999996e-05,
4.6300000000000001e-05,
3.0499999999999999e-05,
2.0400000000000001e-05,
1.3800000000000000e-05,
9.4199999999999996e-06,
6.5200000000000003e-06,
4.5600000000000004e-06,
3.2200000000000001e-06,
2.2900000000000001e-06,
1.6500000000000001e-06,
1.1999999999999999e-06,
8.7400000000000002e-07}};
NIM_CONST terrorfork93005* TMP47 = ((terrorfork93005*)&CNSTSEQ49);
tallerrorrates93007 kerrors_93010;
extern TNimType NTI125; /* float */
TNimType NTI93005; /* TErrorForK */
N_NIMCALL(void, TMP19)(void* p, NI op) {
	terrorfork93005* a;
	NI LOC1;
	a = (terrorfork93005*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NOINLINE(void, nimrodHEX2DbloomprobabilitiesInit)(void) {
	genericSeqAssign(&kerrors_93010[(0)- 0], TMP17, (&NTI93005));
	genericSeqAssign(&kerrors_93010[(1)- 0], TMP25, (&NTI93005));
	genericSeqAssign(&kerrors_93010[(2)- 0], TMP27, (&NTI93005));
	genericSeqAssign(&kerrors_93010[(3)- 0], TMP29, (&NTI93005));
	genericSeqAssign(&kerrors_93010[(4)- 0], TMP31, (&NTI93005));
	genericSeqAssign(&kerrors_93010[(5)- 0], TMP33, (&NTI93005));
	genericSeqAssign(&kerrors_93010[(6)- 0], TMP35, (&NTI93005));
	genericSeqAssign(&kerrors_93010[(7)- 0], TMP37, (&NTI93005));
	genericSeqAssign(&kerrors_93010[(8)- 0], TMP39, (&NTI93005));
	genericSeqAssign(&kerrors_93010[(9)- 0], TMP41, (&NTI93005));
	genericSeqAssign(&kerrors_93010[(10)- 0], TMP43, (&NTI93005));
	genericSeqAssign(&kerrors_93010[(11)- 0], TMP45, (&NTI93005));
	genericSeqAssign(&kerrors_93010[(12)- 0], TMP47, (&NTI93005));
}

N_NOINLINE(void, nimrodHEX2DbloomprobabilitiesDatInit)(void) {
NTI93005.size = sizeof(terrorfork93005*);
NTI93005.kind = 24;
NTI93005.base = (&NTI125);
NTI93005.flags = 2;
NTI93005.marker = TMP19;
}

