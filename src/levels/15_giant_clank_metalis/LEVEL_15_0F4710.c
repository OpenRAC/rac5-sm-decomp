struct Obj {
    char pad00[0x24];
    int f24;
    int f28;
    int f2C;
};

void func_0F4BA8(struct Obj *);
void func_0F4750(struct Obj *);

struct Obj *func_0F4710(struct Obj *obj)
{
    func_0F4BA8(obj);
    func_0F4750(obj);
    obj->f28 = 0;
    obj->f24 = 0;
    obj->f2C = -1;
    return obj;
}
