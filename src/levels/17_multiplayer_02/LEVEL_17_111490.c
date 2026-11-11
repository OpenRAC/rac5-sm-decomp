struct Obj {
    char pad00[0x24];
    int f24;
    int f28;
    int f2C;
};

void func_111928(struct Obj *);
void func_1114D0(struct Obj *);

struct Obj *func_111490(struct Obj *obj)
{
    func_111928(obj);
    func_1114D0(obj);
    obj->f28 = 0;
    obj->f24 = 0;
    obj->f2C = -1;
    return obj;
}
