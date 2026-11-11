struct Obj {
    char pad00[0x24];
    int f24;
    int f28;
    int f2C;
};

void func_12C3B0(struct Obj *);
void func_12BF58(struct Obj *);

struct Obj *func_12BF18(struct Obj *obj)
{
    func_12C3B0(obj);
    func_12BF58(obj);
    obj->f28 = 0;
    obj->f24 = 0;
    obj->f2C = -1;
    return obj;
}
