struct Obj {
    char pad00[4];
    int f04;
    char pad08[0xC];
    int f14;
    char pad18[0x50];
    int f68;
};

void func_0B3328(struct Obj *, int);
int func_0B2FB8(struct Obj *, int);
void func_0B3558(struct Obj *);
int func_0B3640(struct Obj *);

int func_0B2F38(struct Obj *o, int arg)
{
    int saved;

    func_0B3328(o, arg);
    if (o->f04 == 0)
        return 0;
    saved = func_0B2FB8(o, arg);
    func_0B3558(o);
    if (o->f14 & 2)
        o->f68 += func_0B3640(o);
    return saved;
}
