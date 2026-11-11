/* LEVEL_20:0x0E0428 -- placement copy of LEVEL_01_12B8A0.c: returns the cached value of one record, computing it once. */
typedef struct R { char p0[0x68]; int a68; char p1[0xC]; int ready; int value; char p2[0x40]; char sub[1]; } R;
extern int func_0CB460(char *); extern void func_0CA468(int, int);
int func_0E0428(R *r){ int v; if (r == 0) return 0; if (r->ready) return r->value; v = func_0CB460(r->sub); func_0CA468(13, r->a68); r->ready = 1; r->value = v; return v; }
