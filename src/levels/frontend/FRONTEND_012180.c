struct Obj {
    char pad00[4];
    int f04;
    char pad08[0xC];
    int f14;
    char pad18[0x50];
    int f68;
};

void func_012390(struct Obj *, int);
int func_012200(struct Obj *, int);
void func_0125A8(struct Obj *);
int func_012690(struct Obj *);

int func_012180(struct Obj *o, int arg)
{
    int saved;

    func_012390(o, arg);
    if (o->f04 == 0)
        return 0;
    saved = func_012200(o, arg);
    func_0125A8(o);
    if (o->f14 & 2)
        o->f68 += func_012690(o);
    return saved;
}
