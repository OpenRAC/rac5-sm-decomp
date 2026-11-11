/* LEVEL_01:0x18DDD8 -- forwards the record pointer held in the object to func_031C90. */
struct Obj;

struct Item {
    char pad0[0x54];
    struct Obj *rec;
};

extern void func_031C90(struct Obj *o);

void func_18DDD8(struct Item *item)
{
    func_031C90(item->rec);
}
