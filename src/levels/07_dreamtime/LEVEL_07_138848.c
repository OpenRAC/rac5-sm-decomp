struct Obj {
    char pad00[0x24];
    int f24;
    int f28;
    int f2C;
};

void func_138CE0(struct Obj *);
void func_138888(struct Obj *);

struct Obj *func_138848(struct Obj *obj)
{
    func_138CE0(obj);
    func_138888(obj);
    obj->f28 = 0;
    obj->f24 = 0;
    obj->f2C = -1;
    return obj;
}
