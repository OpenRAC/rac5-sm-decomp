struct Obj {
    char pad00[4];
    int f04;
    int f08;
    int f0C;
    int f10;
    int f14;
};

extern int D_001F5C9C[];

void func_12AF70(struct Obj *obj)
{
    D_001F5C9C[0] = 0;
    obj->f04 = 0;
    obj->f10 = 0;
    obj->f14 = 0;
    obj->f0C = 0;
    obj->f08 = 0;
}
