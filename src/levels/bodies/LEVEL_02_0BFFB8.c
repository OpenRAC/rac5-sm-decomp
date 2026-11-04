struct Obj {
    char pad00[4];
    int f04;
    char pad08[0xC];
    int f14;
    char pad18[0x50];
    int f68;
};

void func_0C03A8(struct Obj *, int);
int func_0C0038(struct Obj *, int);
void func_0C05D8(struct Obj *);
int func_0C06C0(struct Obj *);

int func_0BFFB8(struct Obj *o, int arg)
{
    int saved;

    func_0C03A8(o, arg);
    if (o->f04 == 0)
        return 0;
    saved = func_0C0038(o, arg);
    func_0C05D8(o);
    if (o->f14 & 2)
        o->f68 += func_0C06C0(o);
    return saved;
}
