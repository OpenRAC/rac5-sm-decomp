struct Obj {
    char pad00[0x24];
    int f24;
    int f28;
    int f2C;
};

void func_10D1B0(struct Obj *);
void func_10CD58(struct Obj *);

struct Obj *func_10CD18(struct Obj *obj)
{
    func_10D1B0(obj);
    func_10CD58(obj);
    obj->f28 = 0;
    obj->f24 = 0;
    obj->f2C = -1;
    return obj;
}
