struct Obj {
    char pad00[0x24];
    int f24;
    int f28;
    int f2C;
};

void func_133B60(struct Obj *);
void func_133708(struct Obj *);

struct Obj *func_1336C8(struct Obj *obj)
{
    func_133B60(obj);
    func_133708(obj);
    obj->f28 = 0;
    obj->f24 = 0;
    obj->f2C = -1;
    return obj;
}
