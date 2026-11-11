/* LEVEL_02:0x131C50 -- placement copy of LEVEL_01_12B8A0.c: returns the cached value of one record, computing it once. */
typedef struct R { char p0[0x68]; int a68; char p1[0xC]; int ready; int value; char p2[0x40]; char sub[1]; } R;
extern int func_1169B0(char *); extern void func_115978(int, int);
int func_131C50(R *r){ int v; if (r == 0) return 0; if (r->ready) return r->value; v = func_1169B0(r->sub); func_115978(13, r->a68); r->ready = 1; r->value = v; return v; }
