struct Obj {
    char pad00[4];
    int f04;
    char pad08[0xC];
    int f14;
    char pad18[0x50];
    int f68;
};

void func_0BF278(struct Obj *, int);
int func_0BEF08(struct Obj *, int);
void func_0BF4A8(struct Obj *);
int func_0BF590(struct Obj *);

int func_0BEE88(struct Obj *o, int arg)
{
    int saved;

    func_0BF278(o, arg);
    if (o->f04 == 0)
        return 0;
    saved = func_0BEF08(o, arg);
    func_0BF4A8(o);
    if (o->f14 & 2)
        o->f68 += func_0BF590(o);
    return saved;
}
