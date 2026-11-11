struct Obj {
    char pad00[4];
    int f04;
    char pad08[0xC];
    int f14;
    char pad18[0x50];
    int f68;
};

void func_0BADE0(struct Obj *, int);
int func_0BAA70(struct Obj *, int);
void func_0BB010(struct Obj *);
int func_0BB0F8(struct Obj *);

int func_0BA9F0(struct Obj *o, int arg)
{
    int saved;

    func_0BADE0(o, arg);
    if (o->f04 == 0)
        return 0;
    saved = func_0BAA70(o, arg);
    func_0BB010(o);
    if (o->f14 & 2)
        o->f68 += func_0BB0F8(o);
    return saved;
}
