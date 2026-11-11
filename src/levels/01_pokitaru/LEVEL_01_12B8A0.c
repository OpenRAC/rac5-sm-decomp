/* LEVEL_01:0x12B8A0 -- returns the cached value of one record, computing it once. */
typedef struct R { char p0[0x68]; int a68; char p1[0xC]; int ready; int value; char p2[0x40]; char sub[1]; } R;
extern int func_110668(char *); extern void func_10F630(int, int);
int func_12B8A0(R *r){ int v; if (r == 0) return 0; if (r->ready) return r->value; v = func_110668(r->sub); func_10F630(13, r->a68); r->ready = 1; r->value = v; return v; }
