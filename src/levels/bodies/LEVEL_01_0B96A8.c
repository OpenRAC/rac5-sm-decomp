struct Obj {
    char pad00[4];
    int f04;
    char pad08[0xC];
    int f14;
    char pad18[0x50];
    int f68;
};

void func_0B9A98(struct Obj *, int);
int func_0B9728(struct Obj *, int);
void func_0B9CC8(struct Obj *);
int func_0B9DB0(struct Obj *);

int func_0B96A8(struct Obj *o, int arg)
{
    int saved;

    func_0B9A98(o, arg);
    if (o->f04 == 0)
        return 0;
    saved = func_0B9728(o, arg);
    func_0B9CC8(o);
    if (o->f14 & 2)
        o->f68 += func_0B9DB0(o);
    return saved;
}
