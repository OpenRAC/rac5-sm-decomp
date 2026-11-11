struct Obj {
    char pad00[4];
    int f04;
    int f08;
    int f0C;
    int f10;
    int f14;
};

extern int D_0015B9FC[];

void func_0F3768(struct Obj *obj)
{
    D_0015B9FC[0] = 0;
    obj->f04 = 0;
    obj->f10 = 0;
    obj->f14 = 0;
    obj->f0C = 0;
    obj->f08 = 0;
}
