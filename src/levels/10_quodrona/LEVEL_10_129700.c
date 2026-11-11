/* LEVEL_10:0x129700 -- placement copy of LEVEL_01_12B8A0.c: returns the cached value of one record, computing it once. */
typedef struct R { char p0[0x68]; int a68; char p1[0xC]; int ready; int value; char p2[0x40]; char sub[1]; } R;
extern int func_10E880(char *); extern void func_10D848(int, int);
int func_129700(R *r){ int v; if (r == 0) return 0; if (r->ready) return r->value; v = func_10E880(r->sub); func_10D848(13, r->a68); r->ready = 1; r->value = v; return v; }
