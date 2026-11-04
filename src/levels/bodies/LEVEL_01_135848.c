struct Obj {
    char pad00[0x24];
    int f24;
    int f28;
    int f2C;
};

void func_135CE0(struct Obj *);
void func_135888(struct Obj *);

struct Obj *func_135848(struct Obj *obj)
{
    func_135CE0(obj);
    func_135888(obj);
    obj->f28 = 0;
    obj->f24 = 0;
    obj->f2C = -1;
    return obj;
}
