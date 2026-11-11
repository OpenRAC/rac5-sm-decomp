struct Obj {
    char pad00[4];
    int f04;
    char pad08[0xC];
    int f14;
    char pad18[0x50];
    int f68;
};

void func_093018(struct Obj *, int);
int func_092CA8(struct Obj *, int);
void func_093248(struct Obj *);
int func_093330(struct Obj *);

int func_092C28(struct Obj *o, int arg)
{
    int saved;

    func_093018(o, arg);
    if (o->f04 == 0)
        return 0;
    saved = func_092CA8(o, arg);
    func_093248(o);
    if (o->f14 & 2)
        o->f68 += func_093330(o);
    return saved;
}
