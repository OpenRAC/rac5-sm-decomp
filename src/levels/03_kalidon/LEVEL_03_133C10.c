struct Obj {
    char pad00[0x24];
    int f24;
    int f28;
    int f2C;
};

void func_1340A8(struct Obj *);
void func_133C50(struct Obj *);

struct Obj *func_133C10(struct Obj *obj)
{
    func_1340A8(obj);
    func_133C50(obj);
    obj->f28 = 0;
    obj->f24 = 0;
    obj->f2C = -1;
    return obj;
}
