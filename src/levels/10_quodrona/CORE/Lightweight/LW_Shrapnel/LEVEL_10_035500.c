/* LEVEL_10:0x035500 -- placement copy of LEVEL_08_03BC20.c: allocates per-entry records for a table and initialises each one. */
typedef struct L { int w[8]; } L;
typedef struct Elem { char pad0[0xC]; float f0C; char pad10[8]; } Elem;
typedef struct Tbl { Elem *elems; int count; char data[1]; } Tbl;
typedef struct Wrap { char pad0[4]; Tbl *tbl; } Wrap;
typedef struct Src { char pad0[4]; int f4; char pad8[0x10]; Wrap *w; } Src;
extern char D_00216CF0[];
extern char D_00216CE8[];
extern void func_0327F0(L *l, unsigned a, unsigned b, int c);
extern void *func_10D9B8(int size, int a, char *name, int line);
extern void func_034AF8(void *rec, L *l, int a, int i, float f, Elem *e, char *data);
extern void func_034D28(void *a, void *b, void *recs, int n, char *name);

void func_035500(void *a, Src *src, void *c)
{
    L l;
    int s6 = src->f4;
    Tbl *t = src->w->tbl;
    int n = t->count;
    char *recs;
    int i;
    Elem *e;
    char *r;

    func_0327F0(&l, 0xFFFFFFFF, 0xFFFFFFFF, 1);
    recs = func_10D9B8(n * 0xE4, 0, D_00216CF0, 459);
    for (i = 0; i != n; i++) {
        e = &t->elems[i];
        r = recs + i * 0xE4;
        func_034AF8(r, &l, s6, i, t->elems[i].f0C, e, t->data);
    }
    func_034D28(a, c, recs, n, D_00216CE8);
}
