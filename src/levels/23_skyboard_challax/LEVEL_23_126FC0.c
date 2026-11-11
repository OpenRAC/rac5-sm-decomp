struct Obj {
    char pad00[0x24];
    int f24;
    int f28;
    int f2C;
};

void func_127458(struct Obj *);
void func_127000(struct Obj *);

struct Obj *func_126FC0(struct Obj *obj)
{
    func_127458(obj);
    func_127000(obj);
    obj->f28 = 0;
    obj->f24 = 0;
    obj->f2C = -1;
    return obj;
}
