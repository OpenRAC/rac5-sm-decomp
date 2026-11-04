struct Obj {
    char pad00[4];
    int f04;
    int f08;
    int f0C;
    int f10;
    int f14;
};

extern int D_0021B39C[];

void func_1378A0(struct Obj *obj)
{
    D_0021B39C[0] = 0;
    obj->f04 = 0;
    obj->f10 = 0;
    obj->f14 = 0;
    obj->f0C = 0;
    obj->f08 = 0;
}
