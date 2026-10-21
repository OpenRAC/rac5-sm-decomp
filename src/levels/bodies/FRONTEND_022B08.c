/* FRONTEND:0x022B08 -- refreshes the object and clears its counters. */
struct Obj {
    char pad00[0x24];
    int f24;
    int f28;
    int f2C;
};

void func_022FA0(struct Obj *);
void func_022B48(struct Obj *);

struct Obj *func_022B08(struct Obj *obj)
{
    func_022FA0(obj);
    func_022B48(obj);
    obj->f28 = 0;
    obj->f24 = 0;
    obj->f2C = -1;
    return obj;
}
