struct Obj {
    char pad00[4];
    int f04;
    char pad08[0xC];
    int f14;
    char pad18[0x50];
    int f68;
};

void func_0B0830(struct Obj *, int);
int func_0B04C0(struct Obj *, int);
void func_0B0A60(struct Obj *);
int func_0B0B48(struct Obj *);

int func_0B0440(struct Obj *o, int arg)
{
    int saved;

    func_0B0830(o, arg);
    if (o->f04 == 0)
        return 0;
    saved = func_0B04C0(o, arg);
    func_0B0A60(o);
    if (o->f14 & 2)
        o->f68 += func_0B0B48(o);
    return saved;
}
