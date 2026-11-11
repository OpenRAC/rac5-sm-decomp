struct Obj {
    char pad00[0x24];
    int f24;
    int f28;
    int f2C;
};

void func_147218(struct Obj *);
void func_146DC0(struct Obj *);

struct Obj *func_146D80(struct Obj *obj)
{
    func_147218(obj);
    func_146DC0(obj);
    obj->f28 = 0;
    obj->f24 = 0;
    obj->f2C = -1;
    return obj;
}
