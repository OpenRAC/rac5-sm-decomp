/* LEVEL_05:0x127218 -- placement copy of LEVEL_01_12B8A0.c: returns the cached value of one record, computing it once. */
typedef struct R { char p0[0x68]; int a68; char p1[0xC]; int ready; int value; char p2[0x40]; char sub[1]; } R;
extern int func_10CAA8(char *); extern void func_10BA70(int, int);
int func_127218(R *r){ int v; if (r == 0) return 0; if (r->ready) return r->value; v = func_10CAA8(r->sub); func_10BA70(13, r->a68); r->ready = 1; r->value = v; return v; }
