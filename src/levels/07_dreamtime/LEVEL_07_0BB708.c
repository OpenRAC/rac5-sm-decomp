struct Obj {
    char pad00[4];
    int f04;
    char pad08[0xC];
    int f14;
    char pad18[0x50];
    int f68;
};

void func_0BBAF8(struct Obj *, int);
int func_0BB788(struct Obj *, int);
void func_0BBD28(struct Obj *);
int func_0BBE10(struct Obj *);

int func_0BB708(struct Obj *o, int arg)
{
    int saved;

    func_0BBAF8(o, arg);
    if (o->f04 == 0)
        return 0;
    saved = func_0BB788(o, arg);
    func_0BBD28(o);
    if (o->f14 & 2)
        o->f68 += func_0BBE10(o);
    return saved;
}
