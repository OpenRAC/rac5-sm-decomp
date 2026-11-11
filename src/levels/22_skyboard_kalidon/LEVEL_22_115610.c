/* LEVEL_22:0x115610 -- advances a timer, then reacts to input states of the owner. */
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
extern unsigned char D_00166438;
extern int D_002E7828;
extern char D_002E7430[];
extern void func_113FF8(void);
extern void func_113A88(struct Obj *o);
extern void func_0E8160(int a, char *v, char *b);
extern int func_057E78(char *p);
extern int func_131A08(int a, char *p, int c);
extern int func_131A98(int a);
extern void func_113BC0(struct Obj *o, int a, int b);

void func_115610(struct Obj *o)
{
    struct Owner *ow = o->owner;
    o->timer = o->timer + 1.0f;
    if (o->timer < 7.5f) {
        if (ow->flag) {
            if (D_00166438)
                func_113FF8();
            ow->flag = 0;
        }
        func_113A88(o);
    } else {
        o->flags |= 0x20;
    }
    if (o->timer < 18.0f)
        func_0E8160(D_002E7828, o->vec, D_002E7430);
    if (func_057E78(ow->a) || func_131A08(0, ow->b, 0) || func_131A98(0))
        func_113BC0(o, o->kind, 1);
}
