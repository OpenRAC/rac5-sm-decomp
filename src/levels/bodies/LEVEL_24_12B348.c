struct Obj {
    char pad00[0x24];
    int f24;
    int f28;
    int f2C;
};

void func_12B7E0(struct Obj *);
void func_12B388(struct Obj *);

struct Obj *func_12B348(struct Obj *obj)
{
    func_12B7E0(obj);
    func_12B388(obj);
    obj->f28 = 0;
    obj->f24 = 0;
    obj->f2C = -1;
    return obj;
}
