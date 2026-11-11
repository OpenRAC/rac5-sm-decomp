struct Obj {
    char pad00[4];
    int f04;
    char pad08[0xC];
    int f14;
    char pad18[0x50];
    int f68;
};

void func_0A8028(struct Obj *, int);
int func_0A7CB8(struct Obj *, int);
void func_0A8258(struct Obj *);
int func_0A8340(struct Obj *);

int func_0A7C38(struct Obj *o, int arg)
{
    int saved;

    func_0A8028(o, arg);
    if (o->f04 == 0)
        return 0;
    saved = func_0A7CB8(o, arg);
    func_0A8258(o);
    if (o->f14 & 2)
        o->f68 += func_0A8340(o);
    return saved;
}
