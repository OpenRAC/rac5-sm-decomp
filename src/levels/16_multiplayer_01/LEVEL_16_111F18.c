struct Obj {
    char pad00[0x24];
    int f24;
    int f28;
    int f2C;
};

void func_1123B0(struct Obj *);
void func_111F58(struct Obj *);

struct Obj *func_111F18(struct Obj *obj)
{
    func_1123B0(obj);
    func_111F58(obj);
    obj->f28 = 0;
    obj->f24 = 0;
    obj->f2C = -1;
    return obj;
}
