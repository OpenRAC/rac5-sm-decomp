struct Obj {
    char pad00[4];
    int f04;
    char pad08[0xC];
    int f14;
    char pad18[0x50];
    int f68;
};

void func_09A0E0(struct Obj *, int);
int func_099D70(struct Obj *, int);
void func_09A310(struct Obj *);
int func_09A3F8(struct Obj *);

int func_099CF0(struct Obj *o, int arg)
{
    int saved;

    func_09A0E0(o, arg);
    if (o->f04 == 0)
        return 0;
    saved = func_099D70(o, arg);
    func_09A310(o);
    if (o->f14 & 2)
        o->f68 += func_09A3F8(o);
    return saved;
}
