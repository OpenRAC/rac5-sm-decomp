struct Obj {
    char pad00[4];
    int f04;
    char pad08[0xC];
    int f14;
    char pad18[0x50];
    int f68;
};

void func_0A8AE8(struct Obj *, int);
int func_0A8778(struct Obj *, int);
void func_0A8D18(struct Obj *);
int func_0A8E00(struct Obj *);

int func_0A86F8(struct Obj *o, int arg)
{
    int saved;

    func_0A8AE8(o, arg);
    if (o->f04 == 0)
        return 0;
    saved = func_0A8778(o, arg);
    func_0A8D18(o);
    if (o->f14 & 2)
        o->f68 += func_0A8E00(o);
    return saved;
}
