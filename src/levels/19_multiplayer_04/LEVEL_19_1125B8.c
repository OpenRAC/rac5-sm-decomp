struct Obj {
    char pad00[0x24];
    int f24;
    int f28;
    int f2C;
};

void func_112A50(struct Obj *);
void func_1125F8(struct Obj *);

struct Obj *func_1125B8(struct Obj *obj)
{
    func_112A50(obj);
    func_1125F8(obj);
    obj->f28 = 0;
    obj->f24 = 0;
    obj->f2C = -1;
    return obj;
}
