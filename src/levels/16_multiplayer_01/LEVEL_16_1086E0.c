/* LEVEL_16:0x1086E0 -- placement copy of LEVEL_01_12B8A0.c: returns the cached value of one record, computing it once. */
typedef struct R { char p0[0x68]; int a68; char p1[0xC]; int ready; int value; char p2[0x40]; char sub[1]; } R;
extern int func_0F1280(char *); extern void func_0F0248(int, int);
int func_1086E0(R *r){ int v; if (r == 0) return 0; if (r->ready) return r->value; v = func_0F1280(r->sub); func_0F0248(13, r->a68); r->ready = 1; r->value = v; return v; }
