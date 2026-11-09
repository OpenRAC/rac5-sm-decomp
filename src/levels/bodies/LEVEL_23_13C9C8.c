/* LEVEL_23:0x13C9C8 -- placement copy of LEVEL_22_115610.c: advances a timer, then reacts to input states of the owner. */
struct Owner {
    char pad[0x10C];
    unsigned char flag;
    char pad10D[3];
    char a[4];
    char b[4];
};
struct Obj {
    char pad0[0x30];
    char vec[1];
    char pad31[0x14];
    unsigned char kind;
    char pad45[0x12];
    struct Owner *owner;
    char pad5C[8];
    unsigned int flags;
    char pad68[8];
    float timer;
};
extern unsigned char D_001DA930;
extern int D_00363440;
extern char D_00363048[];
extern void func_13B3B0(void);
extern void func_13AE40(struct Obj *o);
extern void func_0FCD00(int a, char *v, char *b);
extern int func_05BA28(char *p);
extern int func_17E6E8(int a, char *p, int c);
extern int func_17E778(int a);
extern void func_13AF78(struct Obj *o, int a, int b);

void func_13C9C8(struct Obj *o)
{
    struct Owner *ow = o->owner;
    o->timer = o->timer + 1.0f;
    if (o->timer < 7.5f) {
        if (ow->flag) {
            if (D_001DA930)
                func_13B3B0();
            ow->flag = 0;
        }
        func_13AE40(o);
    } else {
        o->flags |= 0x20;
    }
    if (o->timer < 18.0f)
        func_0FCD00(D_00363440, o->vec, D_00363048);
    if (func_05BA28(ow->a) || func_17E6E8(0, ow->b, 0) || func_17E778(0))
        func_13AF78(o, o->kind, 1);
}
