struct Obj {
    char pad00[0x24];
    int f24;
    int f28;
    int f2C;
};

void func_12EC78(struct Obj *);
void func_12E820(struct Obj *);

struct Obj *func_12E7E0(struct Obj *obj)
{
    func_12EC78(obj);
    func_12E820(obj);
    obj->f28 = 0;
    obj->f24 = 0;
    obj->f2C = -1;
    return obj;
}
