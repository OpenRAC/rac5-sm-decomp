/* LEVEL_16:0x038420 -- placement copy of LEVEL_01_03C378.c: runs the base setup, then sets four float triples (the first one's x depends on a flag). */
typedef struct { char pad0[0x30]; float a, b, c; } U;
typedef struct { char pad0[0xC]; float a, b, c; } T;
typedef struct {
    char pad0[0x960];
    unsigned long long flags;
} O;
extern void func_037D78(O *o);
extern long long func_003190(void);

static __inline__ void initU(U *t, float a, float b, float c)
{
    t->a = a;
    t->b = b;
    t->c = c;
}

static __inline__ void initT(T *t, float a, float b, float c)
{
    t->a = a;
    t->b = b;
    t->c = c;
}

void func_038420(O *o)
{
    func_037D78(o);
    if (((int (*)(void))func_003190)() || ((int)(o->flags >> 52) & 1))
        initU((U *)((char *)o + 0x200), 0.15000000596046448f, 0.20000000298023224f, 10000.0f);
    else
        initU((U *)((char *)o + 0x200), 0.03999999910593033f, 0.20000000298023224f, 10000.0f);
    initT((T *)((char *)o + 0x23C), 0.20000000298023224f, 0.20000000298023224f, 10000.0f);
    initT((T *)((char *)o + 0x2DC), 0.20000000298023224f, 0.20000000298023224f, 10000.0f);
    initT((T *)((char *)o + 0x254), 0.20000000298023224f, 0.20000000298023224f, 10000.0f);
}
