/* LEVEL_10:0x1A85C0 -- validates an object, binds a sub-object and installs two callbacks. */
typedef struct B {
    char pad0[0x64];
    unsigned int flags;
} B;
typedef struct S {
    char pad0[0x4C];
    int f4C;
} S;
typedef struct Cb {
    char pad0[0xDC];
    void *cb1;
    void *cb2;
} Cb;
typedef struct P { int a; int b; } P;
typedef struct St {
    char pad0[0x6C];
    B *f6C;
    P f70;
    char pad78[4];
    char f7C;
    char pad7D;
    char f7E;
} St;
typedef struct O {
    char pad0[0x45 - 0];
    unsigned char f45;
    char pad46[2];
    Cb *f48;
    char pad4C[8];
    S *f54;
    St *f58;
} O;
extern char D_0022F4A8[];
extern int func_1E1988(O *o, char *p);
extern B *func_145C48(O *o);
extern void func_1A9248(void);
extern void func_1E2FB0(void);

int func_1A85C0(O *o)
{
    S *s2 = o->f54;
    St *s1 = o->f58;
    P *p;

    if (!func_1E1988(o, D_0022F4A8))
        return 0;
    s1->f6C = func_145C48(o);
    if (!s1->f6C)
        return 0;
    if (o->f45 == 3 && s2->f4C == 0)
        return 0;
    s1->f6C->flags |= 0x20;
    p = &s1->f70;
    s1->f70.a = 0;
    p->b = 0;
    o->f48->cb1 = (void *)func_1A9248;
    o->f48->cb2 = (void *)func_1E2FB0;
    s1->f7C = 0;
    s1->f7E = 0;
    s1->f70.a = 0;
    p->b = 0;
    return 1;
}
