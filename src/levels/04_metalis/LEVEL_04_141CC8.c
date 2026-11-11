struct Obj {
    char pad00[0x24];
    int f24;
    int f28;
    int f2C;
};

void func_142160(struct Obj *);
void func_141D08(struct Obj *);

struct Obj *func_141CC8(struct Obj *obj)
{
    func_142160(obj);
    func_141D08(obj);
    obj->f28 = 0;
    obj->f24 = 0;
    obj->f2C = -1;
    return obj;
}
