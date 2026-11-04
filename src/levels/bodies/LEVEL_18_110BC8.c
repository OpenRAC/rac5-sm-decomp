struct Obj {
    char pad00[0x24];
    int f24;
    int f28;
    int f2C;
};

void func_111060(struct Obj *);
void func_110C08(struct Obj *);

struct Obj *func_110BC8(struct Obj *obj)
{
    func_111060(obj);
    func_110C08(obj);
    obj->f28 = 0;
    obj->f24 = 0;
    obj->f2C = -1;
    return obj;
}
