/* LEVEL_22:0x02FD58 -- placement copy of LEVEL_02_03E850.c: when the owner has a target, notifies the owner and
   hands the target to the object. */
typedef struct {
    char pad[0xE4];
    void *target;
} Owner;

typedef struct {
    char pad[0x48];
    Owner *owner;
} Obj;

extern void func_07A730(Owner *owner, int value);
extern void func_02FC20(Obj *obj, void *target);

void func_02FD58(Obj *obj)
{
    Owner *owner = obj->owner;
    void *target = owner->target;

    if (target) {
        func_07A730(owner, 1);
        func_02FC20(obj, target);
    }
}
