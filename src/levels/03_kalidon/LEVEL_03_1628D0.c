/* LEVEL_03:0x1628D0 -- placement copy of LEVEL_01_18DDD8.c: forwards the record pointer held in the object to func_02F758. */
struct Obj;

struct Item {
    char pad0[0x54];
    struct Obj *rec;
};

extern void func_02F758(struct Obj *o);

void func_1628D0(struct Item *item)
{
    func_02F758(item->rec);
}
