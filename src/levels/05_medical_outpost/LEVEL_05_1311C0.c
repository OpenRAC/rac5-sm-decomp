struct Obj {
    char pad00[0x24];
    int f24;
    int f28;
    int f2C;
};

void func_131658(struct Obj *);
void func_131200(struct Obj *);

struct Obj *func_1311C0(struct Obj *obj)
{
    func_131658(obj);
    func_131200(obj);
    obj->f28 = 0;
    obj->f24 = 0;
    obj->f2C = -1;
    return obj;
}
