struct Obj {
    char pad00[0x24];
    int f24;
    int f28;
    int f2C;
};

void func_13C090(struct Obj *);
void func_13BC38(struct Obj *);

struct Obj *func_13BBF8(struct Obj *obj)
{
    func_13C090(obj);
    func_13BC38(obj);
    obj->f28 = 0;
    obj->f24 = 0;
    obj->f2C = -1;
    return obj;
}
