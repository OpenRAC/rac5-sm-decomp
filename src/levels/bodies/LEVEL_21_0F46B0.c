/* LEVEL_21:0x0F46B0 -- placement copy of FRONTEND_022AA8.c: calls a helper, then dispatches a virtual method on an indexed object. */
typedef struct VT { char p0[0x10]; short adj; short p1; void (*fn)(char *); } VT;
typedef struct Obj { char p0[0x14]; VT *vt; } Obj;
typedef struct Holder { char p0[0x24]; Obj **tab; char p1[0x8]; int flag; } Holder;
extern int func_0F4B48(void);
void func_0F46B0(Holder *h, int index){ Obj *o; func_0F4B48(); o = h->tab[index]; o->vt->fn((char *)o + o->vt->adj); h->flag = 1; }
