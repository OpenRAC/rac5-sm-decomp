struct Obj {
    char pad00[0x24];
    int f24;
    int f28;
    int f2C;
};

void func_0E5198(struct Obj *);
void func_0E4D40(struct Obj *);

struct Obj *func_0E4D00(struct Obj *obj)
{
    func_0E5198(obj);
    func_0E4D40(obj);
    obj->f28 = 0;
    obj->f24 = 0;
    obj->f2C = -1;
    return obj;
}
